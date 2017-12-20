#ifndef _SPINDELN_H
#define _SPINDELN_H
#include "auftrag.h"

class DrehteilAuftrag;

class SpindelAuftrag:public Auftrag {
    public:
	SpindelAuftrag(DrehteilAuftrag* A);
};

#endif
