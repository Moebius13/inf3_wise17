#ifndef _MOTOREN
#define _MOTOREN
#include "auftrag.h"

class KubischerAuftrag;

class MotorAuftrag:public Auftrag{
    public:
	MotorAuftrag(KubischerAuftrag* A):Auftrag((Auftrag*)A){
	    DLZ=1*DAY_FACT;
	}
};

#endif
