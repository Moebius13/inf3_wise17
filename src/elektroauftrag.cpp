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
	void print(const char* prefix){
	    printf("%sElektrikauftrag #%i\n",prefix,this);
	    Schaltschrank->print("|||");
	    printf("%s/\n",prefix);
	}
	~ElektroAuftrag(){
	    delete Schaltschrank;
	}
};

#endif
