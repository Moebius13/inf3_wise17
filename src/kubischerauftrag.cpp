#ifndef KUBISCH
#define KUBISCH
#include "auftrag.cpp"
#include "fzarbeitstischeauftrag.h"
#include "fzmotorenauftrag.h"
#include "fzstaenderauftrag.h"
#include "fzvorschubgetriebeauftrag.h"

class Produkt;

class KubischerAuftrag:public Auftrag {
    private:
	ArbeitsTischAuftrag* Arbeitstische;
	MotorAuftrag*        Motoren;
	StaenderAuftrag*     Staender;
	GetriebeAuftrag*     Vorschubgetriebe;
    public:
	KubischerAuftrag(Produkt* P):Auftrag((Auftrag*)P){
	    DLZ=1*DAY_FACT;
	}
	void makeSub(){
	    Arbeitstische = new ArbeitsTischAuftrag(this);
	    Motoren = new MotorAuftrag(this);
	    Staender = new StaenderAuftrag(this);
	    Vorschubgetriebe = new GetriebeAuftrag(this);
	}
	~KubischerAuftrag(){
	    delete Arbeitstische;
	    delete Motoren;
	    delete Staender;
	    delete Vorschubgetriebe;
	}
};

#endif
