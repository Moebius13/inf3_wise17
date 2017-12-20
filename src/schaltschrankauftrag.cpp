#ifndef _SCHALTSCHRANK
#define _SCHALTSCHRANK
#include "auftrag.h"

class ElektroAuftrag;

class SchaltschrankAuftrag:public Auftrag {
    public:
	SchaltschrankAuftrag(ElektroAuftrag* A):Auftrag((Auftrag*)A){
	    DLZ=1*DAY_FACT;
	}
};

#endif
