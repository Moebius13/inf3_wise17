#ifndef _STAENDER
#define _STAENDER
#include "auftrag.h"

class KubischerAuftrag;

class StaenderAuftrag:public Auftrag{
    public:
	StaenderAuftrag(KubischerAuftrag* A):Auftrag((Auftrag*)A){
	    DLZ=1*DAY_FACT;
	}
};

#endif
