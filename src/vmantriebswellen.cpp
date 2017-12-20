#ifndef WELLE
#define WELLE
#include "auftrag.cpp"

class DrehteilAuftrag;

class WellenAuftrag:public Auftrag {
    public:
	WellenAuftrag(DrehteilAuftrag* A):Auftrag((Auftrag*)A){
	    DLZ=1*DAY_FACT;
	}
	time_t makeSub(const time_t start){
	    this->Fertigungsbeginn=start;
	    return this->DLZ;
	}
	void print(const char* prefix){
	    printf("%sAntriebswellenfertigungsauftrag #%i[%s]\n",prefix,this,this->Status);
	}
};

#endif
