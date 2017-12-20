#ifndef SCHALTSCHRANK
#define SCHALTSCHRANK
#include "auftrag.cpp"

class ElektroAuftrag;

class SchaltschrankAuftrag:public Auftrag {
    public:
	SchaltschrankAuftrag(ElektroAuftrag* A):Auftrag((Auftrag*)A){
	    DLZ=1*DAY_FACT;
	}
};

#endif
