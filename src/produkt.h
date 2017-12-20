#ifndef _PRODUKT_H
#define _PRODUKT_H
#include "auftrag.h"
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
