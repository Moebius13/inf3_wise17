#ifndef KUBISCH_H
#define KUBISCH_H
#include "auftrag.cpp"

class Produkt;
class ArbeitsTischAuftrag;
class MotorAuftrag;
class StaenderAuftrag;
class GetriebeAuftrag;

class KubischerAuftrag:public Auftrag {
    private:
	ArbeitsTischAuftrag* Arbeitstische;
	MotorAuftrag*        Motoren;
	StaenderAuftrag*     Staender;
	GetriebeAuftrag*     Vorschubgetriebe;
    public:
	KubischerAuftrag(Produkt* P);
};

#endif
