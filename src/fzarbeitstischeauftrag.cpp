#ifndef ARBTISCH
#define ARBTISCH
#include "auftrag.cpp"

class KubischerAuftrag;

class ArbeitsTischAuftrag:public Auftrag{
    public:
	ArbeitsTischAuftrag(KubischerAuftrag* A):Auftrag((Auftrag*)A){
	    DLZ=1*DAY_FACT;
	}
	time_t makeSub(const time_t start){
	    this->Fertigungsbeginn=start;
	    return this->DLZ;
	}
	void print(const char* prefix){
	    printf("%sArbeitstisch #%i[%s]\n",prefix,this,this->Status);
	}
};

#endif
