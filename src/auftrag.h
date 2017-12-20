#ifndef AUFTRAG_H
#define AUFTRAG_H
#include "eckdaten.cpp"
#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

class Auftrag:public Eckdaten {
    private:
	const Auftrag* metaRef;
    public:
	Auftrag();
	Auftrag(const Auftrag* Ref);
	const void makeSub();
	time_t* earliestDeadline();
	void print(const char* prefix);
};

#endif
