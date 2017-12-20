#ifndef ELEKTRO
#define ELEKTRO
#include "auftrag.cpp"
#include "schaltschrankauftrag.h"

class Produkt;

class ElektroAuftrag:public Auftrag {
    private:
	SchaltschrankAuftrag* Schaltschrank;
    public:
	ElektroAuftrag(Produkt* P):Auftrag((Auftrag*) P){
	    DLZ=8*DAY_FACT;
	}
	void makeSub(){
	    Schaltschrank = new SchaltschrankAuftrag(this);
	}
	~ElektroAuftrag(){
	    delete Schaltschrank;
	}
};

#endif
