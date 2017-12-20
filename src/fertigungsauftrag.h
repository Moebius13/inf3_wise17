#ifndef FERTIGUNG_H
#define FERTIGUNG_H
#include "auftrag.cpp"

class Produkt;
class Kunde;

class FertigungsAuftrag:public Auftrag {
    private:
	Produkt* Endprodukt;
	Kunde*   Auftraggeber;
    public:
	FertigungsAuftrag(Produkt* P, Kunde* K);
};

#endif
