#ifndef _SCHALTSCHRANK_H
#define _SCHALTSCHRANK_H
#include "auftrag.h"

class ElektroAuftrag;

class SchaltschrankAuftrag:public Auftrag {
    public:
	SchaltschrankAuftrag(ElektroAuftrag* A);
};

#endif
