#ifndef VORSCHUB
#define VORSCHUB
#include "auftrag.cpp"

class KubischerAuftrag;

class GetriebeAuftrag:public Auftrag{
    public:
	GetriebeAuftrag(KubischerAuftrag* A):Auftrag((Auftrag*)A){
	    DLZ=1*DAY_FACT;
	}

};

#endif
