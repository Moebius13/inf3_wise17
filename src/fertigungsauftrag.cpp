#ifndef FERTIGUNG
#define FERTIGUNG
#include "auftrag.cpp"
#include "produkt.h"

class Kunde;

class FertigungsAuftrag:public Auftrag {
    private:
	Produkt* Endprodukt;
	Kunde*   Auftraggeber;
    public:
	FertigungsAuftrag(Kunde* K):Auftrag(NULL){
	    Auftraggeber=K;
	}
	setProdukt(Produkt* P){
	    Endprodukt=P;
	}
	void print(const char* prefix){
	    printf("Fertigungsauftrag #%i für Produkt #%i\n",this,Endprodukt);
	    Endprodukt->print("|");
	    printf("/\n");
	}
};

#endif
