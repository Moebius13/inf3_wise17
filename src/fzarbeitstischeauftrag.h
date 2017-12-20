#ifndef ARBTISCH
#ifndef ARBTISCH_H
#define ARBTISCH_H
#include "auftrag.cpp"

class KubischerAuftrag;

class ArbeitsTischAuftrag:public Auftrag{
    public:
	ArbeitsTischAuftrag(KubischerAuftrag* A);
};

#endif
#endif
