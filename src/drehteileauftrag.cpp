#ifndef DREHTEIL
#define DREHTEIL
#include "auftrag.cpp"
#include "vmantriebswellen.cpp"
#include "vmspindeln.cpp"

class Produkt;

class DrehteilAuftrag:public Auftrag {
    private:
	WellenAuftrag*  Antriebswellen;
	SpindelAuftrag* Spindeln;
    public:
	DrehteilAuftrag(Produkt* P):Auftrag((Auftrag*)P){
	    this->DLZ=1*DAY_FACT;
	}
	time_t makeSub(const time_t start){
	    Antriebswellen = new WellenAuftrag(this);
	    time_t t1=Antriebswellen->makeSub(start);
	    Spindeln = new SpindelAuftrag(this);
	    time_t t2=Spindeln->makeSub(start);
	    t1=t1<t2?t2:t1;
	    this->Fertigungsbeginn=t1+start;
	    return t1+this->DLZ;
	}	
	void print(const char* prefix){
	    printf("%sDrehteilauftrag #%i[%s]\n",prefix,this,this->Status);
	    printf("%sFertigungsbeginn: %s",prefix,ctime(&Fertigungsbeginn));
	    printTime(prefix);
	    Antriebswellen->print("|||");
	    printf("%s/\n",prefix);
	    Spindeln->print("|||");
	    printf("%s/\n",prefix);
	}
	~DrehteilAuftrag(){
	    delete Antriebswellen;
	    delete Spindeln;
	}
};

#endif
