#ifndef _DREHTEIL
#define _DREHTEIL
#include "auftrag.cpp"
//forward declaration
class Produkt;
class WellenAuftrag;
class SpindelAuftrag;

class DrehteilAuftrag:Auftrag {
  private:
    WellenAuftrag*  Antriebswellen;
    SpindelAuftrag* Spindeln;
  public:
    DrehteilAuftrag(Produkt* P):Auftrag((Auftrag*)P){}
};
#endif
