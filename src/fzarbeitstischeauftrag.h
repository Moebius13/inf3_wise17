#ifndef _ARBTISCH_H
#define _ARBTISCH_H
#include "auftrag.h"

class KubischerAuftrag;

class ArbeitsTischAuftrag:public Auftrag{
    public:
	ArbeitsTischAuftrag(KubischerAuftrag* A);
};

#endif
