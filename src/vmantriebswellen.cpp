#ifndef WELLE
#define WELLE
#include "auftrag.cpp"

class DrehteilAuftrag;

class WellenAuftrag:public Auftrag {
    public:
	WellenAuftrag(DrehteilAuftrag* A):Auftrag((Auftrag*)A){
	    DLZ=1*DAY_FACT;
	}
	void print(const char* prefix){
	    printf("%sAntriebswellenfertigungsauftrag #%i\n",prefix,this);
	}
};

#endif
