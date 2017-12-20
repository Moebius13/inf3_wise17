#ifndef _MOTOREN_H
#define _MOTOREN_H
#include "auftrag.h"

class KubischerAuftrag;

class MotorAuftrag:public Auftrag{
    public:
	MotorAuftrag(KubischerAuftrag* A);
};

#endif
