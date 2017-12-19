#ifndef _KUBISCH
#define _KUBISCH
#include "auftrag.cpp"
class Produkt;
class ArbeitsTischAuftrag;
class MotorAuftrag;
class StaenderAuftrag;
class GetriebeAuftrag;

class KubischerAuftrag:Auftrag {
private:
  ArbeitsTischAuftrag* Arbeitstische;
  MotorAuftrag*        Motoren;
  StaenderAuftrag*     Staender;
  GetriebeAuftrag*     Vorschubgetriebe;
public:
  KubischerAuftrag(Produkt* P);
};
#endif
