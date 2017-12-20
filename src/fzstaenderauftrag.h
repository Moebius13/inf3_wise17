#ifndef STAENDER_H
#define STAENDER_H
#include "auftrag.cpp"

class KubischerAuftrag;

class StaenderAuftrag:public Auftrag{
    public:
	StaenderAuftrag(KubischerAuftrag* A);
};

#endif
