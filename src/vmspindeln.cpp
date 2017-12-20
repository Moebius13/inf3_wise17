#ifndef SPINDELN
#define SPINDELN
#include "auftrag.cpp"

class DrehteilAuftrag;

class SpindelAuftrag:public Auftrag {
    public:
	SpindelAuftrag(DrehteilAuftrag* A):Auftrag((Auftrag*)A){
	    DLZ=1*DAY_FACT;
	}
	time_t makeSub(const time_t start){
	    this->Fertigungsbeginn=start;
	    return this->DLZ;
	}
	void print(const char* prefix){
	    printf("%sSpindelfertigungsauftrag #%i\n",prefix,this);
	}
};

#endif
