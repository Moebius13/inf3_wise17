#ifndef PRODUKT_H
#define PRODUKT_H
#include "auftrag.cpp"
#include "drehteileauftrag.h"
#include "kubischerauftrag.h"
#include "elektroauftrag.h"

class FertigungsAuftrag;

class Produkt:public Auftrag {
    private:
	const DrehteilAuftrag*  Drehteile;
	const KubischerAuftrag* Kubischer;
	const ElektroAuftrag*   Elektro;
    public:
	Produkt(const FertigungsAuftrag* F);
	//apparently this ^ is how to call superclass constructors according to stackoverflow - kinda wierd
	void makeSub();
	~Produkt();
};

#endif
