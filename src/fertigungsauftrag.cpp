#ifndef _FERTIGUNG
#define _FERTIGUNG
#include "kunde.h"
#include "produkt.cpp"
#include "auftrag.cpp"

class Fertigungsauftrag:Auftrag {
private:
  Produkt* Endprodukt;
  Kunde* Auftraggeber;
public:
  Fertigungsauftrag(Produkt* P, Kunde* K):Auftrag(NULL)
  {
    Auftraggeber=K;
    Endprodukt=P;
  }
};
#endif
