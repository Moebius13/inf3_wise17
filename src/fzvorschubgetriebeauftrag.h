#ifndef _VORSCHUB_H
#define _VORSCHUB_H
#include "auftrag.h"

class KubischerAuftrag;

class GetriebeAuftrag:public Auftrag{
    public:
	GetriebeAuftrag(KubischerAuftrag* A);

};

#endif
