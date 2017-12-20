#ifndef AUFTRAG
#define AUFTRAG
#include "eckdaten.cpp"
#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

class Auftrag: public Eckdaten {
    private:
	const Auftrag* metaRef;
    public:
	Auftrag(){
	    metaRef=NULL;
	}//shutup compiler...
	Auftrag(const Auftrag* Ref){
	    //  Eckdaten(); //not needed, no-arg constructor call is automatic if nothing else is goven
	    metaRef = Ref;
	} 
	time_t makeSub(const time_t startTime);
	time_t* earliestDeadline();
	void print(const char* prefix) {
	    printf("%p\n",metaRef);
	}
};

#endif
