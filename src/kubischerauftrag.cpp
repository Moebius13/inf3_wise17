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
	time_t makeSub(const time_t start){
	    Arbeitstische = new ArbeitsTischAuftrag(this);
	    time_t t1=Arbeitstische->makeSub(start);
	    Motoren = new MotorAuftrag(this);
	    time_t t2=Motoren->makeSub(start);
	    t1=t1<t2?t2:t1;
	    Staender = new StaenderAuftrag(this);
	    t2=Staender->makeSub(start);
	    t1=t1<t2?t2:t1;
	    Vorschubgetriebe = new GetriebeAuftrag(this);
	    t2=Vorschubgetriebe->makeSub(start);
	    t1=t1<t2?t2:t1;
	    this->Fertigungsbeginn=t1+start;
	    return t1+this->DLZ;
	}
	void print(const char* prefix){
	    printf("%sTeilfertigungsauftrag #%i[%s]\n",prefix,this,this->Status);
	    printf("%sFertigungsbeginn: %s",prefix,ctime(&Fertigungsbeginn));
	    printTime(prefix);
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
