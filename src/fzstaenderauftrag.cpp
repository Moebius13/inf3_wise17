#ifndef STAENDER
#define STAENDER
#include "auftrag.cpp"

class KubischerAuftrag;

class StaenderAuftrag:public Auftrag{
    public:
	StaenderAuftrag(KubischerAuftrag* A):Auftrag((Auftrag*)A){
	    DLZ=1*DAY_FACT;
	}
};

#endif
