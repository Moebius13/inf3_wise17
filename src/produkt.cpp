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
	time_t makeSub(const time_t start){
	    Drehteile = new DrehteilAuftrag(this);
	    time_t t1=Drehteile->makeSub(start);
	    Kubischer = new KubischerAuftrag(this);
	    time_t t2=Kubischer->makeSub(start);
	    t1=t1<t2?t2:t1;
	    Elektro   = new ElektroAuftrag(this);
	    t2=Elektro->makeSub(start);
	    t1=t1<t2?t2:t1;
	    this->Fertigungsbeginn=t1+start;
	    return t1+this->DLZ;
	}
	void print(const char* prefix){
	    printf("%sProdukt #%i[%s]\n",prefix,this,this->Status);
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
