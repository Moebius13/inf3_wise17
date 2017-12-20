#ifndef _STAENDER_H
#define _STAENDER_H
#include "auftrag.h"

class KubischerAuftrag;

class StaenderAuftrag:public Auftrag{
    public:
	StaenderAuftrag(KubischerAuftrag* A);
};

#endif
