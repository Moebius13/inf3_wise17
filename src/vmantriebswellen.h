#ifndef _WELLE_H
#define _WELLE_H
#include "auftrag.h"

class DrehteilAuftrag;

class WellenAuftrag:public Auftrag {
    public:
	WellenAuftrag(DrehteilAuftrag* A);
};

#endif
