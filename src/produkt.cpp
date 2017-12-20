#ifndef _PRODUKT
#define _PRODUKT
#include "auftrag.h"
#include "drehteileauftrag.h"
#include "kubischerauftrag.h"
#include "elektroauftrag.h"
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
	~Produkt(){
	    delete Drehteile;
	    delete Kubischer;
	    delete Elektro;
	}
};

#endif
