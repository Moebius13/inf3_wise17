#ifndef _ELEKTRO
#define _ELEKTRO
#include "auftrag.h"

class SchaltschrankAuftrag;
class Produkt;

class ElektroAuftrag:public Auftrag {
    private:
	SchaltschrankAuftrag* Schaltschrank;
    public:
	ElektroAuftrag(Produkt* P);

};

#endif
