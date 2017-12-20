#ifndef ELEKTRO
#ifndef ELEKTRO_H
#define ELEKTRO_H
#include "auftrag.cpp"

class SchaltschrankAuftrag;
class Produkt;

class ElektroAuftrag:public Auftrag {
    private:
	SchaltschrankAuftrag* Schaltschrank;
    public:
	ElektroAuftrag(Produkt* P);
	~ElektroAuftrag();
};

#endif
#endif
