#ifndef ARBTISCH
#define ARBTISCH
#include "auftrag.cpp"

class KubischerAuftrag;

class ArbeitsTischAuftrag:public Auftrag{
    public:
	ArbeitsTischAuftrag(KubischerAuftrag* A):Auftrag((Auftrag*)A){
	    DLZ=1*DAY_FACT;
	}
	void print(const char* prefix){
	    printf("%sArbeitstisch #%i\n",prefix,this);
	}
};

#endif
