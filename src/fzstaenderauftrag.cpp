#ifndef STAENDER
#define STAENDER
#include "auftrag.cpp"

class KubischerAuftrag;

class StaenderAuftrag:public Auftrag{
    public:
	StaenderAuftrag(KubischerAuftrag* A):Auftrag((Auftrag*)A){
	    DLZ=1*DAY_FACT;
	}
	time_t makeSub(const time_t start){
	    this->Fertigungsbeginn=start;
	    return this->DLZ;
	}
	void print(const char* prefix){
	    printf("%sMaschinenstaender #%i\n",prefix,this);
	}
};

#endif
