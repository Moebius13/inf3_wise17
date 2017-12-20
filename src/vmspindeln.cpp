#ifndef _SPINDELN
#define _SPINDELN
#include "auftrag.h"

class DrehteilAuftrag;

class SpindelAuftrag:public Auftrag {
    public:
	SpindelAuftrag(DrehteilAuftrag* A):Auftrag((Auftrag*)A){
	    DLZ=1*DAY_FACT;
	}
};

#endif
