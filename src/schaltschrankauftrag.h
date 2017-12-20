#ifndef SCHALTSCHRANK_H
#define SCHALTSCHRANK_H
#include "auftrag.cpp"

class ElektroAuftrag;

class SchaltschrankAuftrag:public Auftrag {
    public:
	SchaltschrankAuftrag(ElektroAuftrag* A);
};

#endif
