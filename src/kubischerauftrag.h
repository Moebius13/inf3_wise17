#ifndef _KUBISCH_H
#define _KUBISCH_H
#include "auftrag.h"

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
