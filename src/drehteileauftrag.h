#ifndef DREHTEIL
#ifndef DREHTEIL_H
#define DREHTEIL_H
#include "auftrag.cpp"
#include "vmspindeln.h"
#include "vmantriebswellen.h"

class Produkt;

class DrehteilAuftrag:public Auftrag {
    private:
	WellenAuftrag*  Antriebswellen;
	SpindelAuftrag* Spindeln;
    public:
	DrehteilAuftrag(Produkt* P);
	~DrehteilAuftrag();
};

#endif
#endif
