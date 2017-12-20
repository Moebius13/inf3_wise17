#ifndef FERTIGUNG
#define FERTIGUNG
#include "auftrag.cpp"

class Produkt;
class Kunde;

class FertigungsAuftrag:public Auftrag {
    private:
	Produkt* Endprodukt;
	Kunde*   Auftraggeber;
    public:
	FertigungsAuftrag(Produkt* P, Kunde* K):Auftrag(NULL){
	    Auftraggeber=K;
	    Endprodukt=P;
	}
};

#endif
