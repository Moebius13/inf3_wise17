#ifndef KUBISCH
#define KUBISCH
#include "auftrag.cpp"
#include "fzarbeitstischeauftrag.cpp"
#include "fzmotorenauftrag.cpp"
#include "fzstaenderauftrag.cpp"
#include "fzvorschubgetriebeauftrag.cpp"

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
	void print(const char* prefix){
	    printf("%sTeilfertigungsauftrag #%i\n",prefix,this);
	    Arbeitstische->print("|||");
	    printf("%s/\n",prefix);
	    Motoren->print("|||");
	    printf("%s/\n",prefix);
	    Staender->print("|||");
	    printf("%s/\n",prefix);
	    Vorschubgetriebe->print("|||");
	    printf("%s/\n",prefix);
	}
	~KubischerAuftrag(){
	    delete Arbeitstische;
	    delete Motoren;
	    delete Staender;
	    delete Vorschubgetriebe;
	}
};

#endif
