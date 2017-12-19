#ifndef _ELEKTRO
#define _ELEKTRO
#include "auftrag.cpp"

class SchaltschrankAuftrag;
class Produkt;

class ElektroAuftrag:Auftrag {
private:
    SchaltschrankAuftrag* Schaltschrank;
public:
    ElektroAuftrag(Produkt* P);

};
#endif
