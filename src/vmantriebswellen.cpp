#ifndef _WELLE
#define _WELLE
#include "auftrag.h"

class DrehteilAuftrag;

class WellenAuftrag:public Auftrag {
    public:
	WellenAuftrag(DrehteilAuftrag* A):Auftrag((Auftrag*)A){
	    DLZ=1*DAY_FACT;
	}
};

#endif
