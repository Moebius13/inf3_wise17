#ifndef VORSCHUB
#ifndef VORSCHUB_H
#define VORSCHUB_H
#include "auftrag.cpp"

class KubischerAuftrag;

class GetriebeAuftrag:public Auftrag{
    public:
	GetriebeAuftrag(KubischerAuftrag* A);

};

#endif
#endif
