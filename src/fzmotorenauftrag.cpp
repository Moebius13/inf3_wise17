#ifndef MOTOREN
#define MOTOREN
#include "auftrag.cpp"

class KubischerAuftrag;

class MotorAuftrag:public Auftrag{
    public:
	MotorAuftrag(KubischerAuftrag* A):Auftrag((Auftrag*)A){
	    DLZ=1*DAY_FACT;
	}
	time_t makeSub(const time_t start){
	    this->Fertigungsbeginn=start;
	    return this->DLZ;
	}
	void print(const char* prefix){
	    printf("%sMotor #%i[%s]\n",prefix,this,this->Status);
	    printf("%sFertigungsbeginn: %s",prefix,ctime(&Fertigungsbeginn));
	    printTime(prefix);
	}
};

#endif
