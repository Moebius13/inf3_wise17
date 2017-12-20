#ifndef MOTOREN_H
#define MOTOREN_H
#include "auftrag.cpp"

class KubischerAuftrag;

class MotorAuftrag:public Auftrag{
    public:
	MotorAuftrag(KubischerAuftrag* A);
};

#endif
