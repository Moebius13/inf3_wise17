#ifndef SPINDELN_H
#define SPINDELN_H
#include "auftrag.cpp"

class DrehteilAuftrag;

class SpindelAuftrag:public Auftrag {
    public:
	SpindelAuftrag(DrehteilAuftrag* A);
};

#endif
