#ifndef _DREHTEIL_H
#define _DREHTEIL_H
class Produkt;
class WellenAuftrag;
class SpindelAuftrag;

class DrehteilAuftrag:Auftrag {
  private:
    WellenAuftrag*  Antriebswellen;
    SpindelAuftrag* Spindeln;
  public:
    DrehteilAuftrag(Produkt* P);
};
#endif
