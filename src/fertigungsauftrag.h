#ifndef _FERTIGUNG_H
#define _FERTIGUNG_H
#include "auftrag.h"

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
