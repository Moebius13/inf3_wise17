#ifndef DREHTEIL
#define DREHTEIL
#include "auftrag.cpp"
#include "vmantriebswellen.h"
#include "vmspindeln.h"

class Produkt;

class DrehteilAuftrag:public Auftrag {
    private:
	WellenAuftrag*  Antriebswellen;
	SpindelAuftrag* Spindeln;
    public:
	DrehteilAuftrag(Produkt* P):Auftrag((Auftrag*)P){
	    this->DLZ=1*DAY_FACT;
	}
	void makeSub(){
	    Antriebswellen = new WellenAuftrag(this);
	    Spindeln = new SpindelAuftrag(this);
	}
	~DrehteilAuftrag(){
	    delete Antriebswellen;
	    delete Spindeln;
	}
};

#endif
