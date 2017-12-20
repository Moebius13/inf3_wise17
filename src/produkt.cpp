#ifndef PRODUKT
#define PRODUKT
#include "auftrag.cpp"
#include "drehteileauftrag.cpp"
#include "kubischerauftrag.cpp"
#include "elektroauftrag.cpp"
#include <stdio.h>

class FertigungsAuftrag;

class Produkt:public Auftrag {
    private:
	const DrehteilAuftrag*  Drehteile;
	const KubischerAuftrag* Kubischer;
	const ElektroAuftrag*   Elektro;
    public:
	Produkt(const FertigungsAuftrag* F):Auftrag((Auftrag*)F){
	    DLZ=3*DAY_FACT;
	}
	//apparently this ^ is how to call superclass constructors according to stackoverflow - kinda wierd
	void makeSub(){
	    Drehteile = new DrehteilAuftrag(this);
	    Kubischer = new KubischerAuftrag(this);
	    Elektro   = new ElektroAuftrag(this);
	    Drehteile->makeSub();
	    Kubischer->makeSub();
	    Elektro->makeSub();
	}
	void print(const char* prefix){
	    printf("%sProdukt #%i\n",prefix,this);
	    Drehteile->print("||");
	    printf("%s/\n",prefix);
	    Kubischer->print("||");
	    printf("%s/\n",prefix);
	    Elektro->print("||");
	    printf("%s/\n",prefix);
	}
	~Produkt(){
	    delete Drehteile;
	    delete Kubischer;
	    delete Elektro;
	}
};

#endif
