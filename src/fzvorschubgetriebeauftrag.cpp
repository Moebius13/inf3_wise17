#ifndef _VORSCHUB
#define _VORSCHUB
#include "auftrag.h"

class KubischerAuftrag;

class GetriebeAuftrag:public Auftrag{
    public:
	GetriebeAuftrag(KubischerAuftrag* A):Auftrag((Auftrag*)A){
	    DLZ=1*DAY_FACT;
	}

};

#endif
