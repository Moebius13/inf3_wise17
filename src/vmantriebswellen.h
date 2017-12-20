#ifndef WELLE
#ifndef WELLE_H
#define WELLE_H
#include "auftrag.cpp"

class DrehteilAuftrag;

class WellenAuftrag:public Auftrag {
    public:
	WellenAuftrag(DrehteilAuftrag* A);
};

#endif
#endif
