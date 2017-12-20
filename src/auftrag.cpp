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
	    this->Status="Pending";
	} 
	time_t makeSub(const time_t startTime);
	void printTime(const char* prefix){
	    int d,h,m,s;
	    s=this->DLZ % 60;
	    m=(this->DLZ / 60) % 60;
	    h=(this->DLZ / 3600) % 24;
	    d=this->DLZ / 86400;
	    printf("%sDurchlaufzeit:%i Tage, %i:%i:%i Stunden\n",prefix,d,h,m,s);
	}
	void print(const char* prefix) {
	    printf("%p\n",metaRef);
	}
};

#endif
