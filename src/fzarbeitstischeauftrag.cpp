#ifndef _ARBTISCH
#define _ARBTISCH
#include "auftrag.h"

class KubischerAuftrag;

class ArbeitsTischAuftrag:public Auftrag{
    public:
	ArbeitsTischAuftrag(KubischerAuftrag* A):Auftrag((Auftrag*)A){
	    DLZ=1*DAY_FACT;
	}
};

#endif
