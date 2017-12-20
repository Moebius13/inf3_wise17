#ifndef VORSCHUB
#define VORSCHUB
#include "auftrag.cpp"

class KubischerAuftrag;

class GetriebeAuftrag:public Auftrag{
    public:
	GetriebeAuftrag(KubischerAuftrag* A):Auftrag((Auftrag*)A){
	    DLZ=1*DAY_FACT;
	}
	time_t makeSub(const time_t start){
	    this->Fertigungsbeginn=start;
	    return this->DLZ;
	}
	void print(const char* prefix){
	    printf("%sVorschubgetriebe #%i[%s]\n",prefix,this,this->Status);
	    printf("%sFertigungsbeginn: %s",prefix,ctime(&Fertigungsbeginn));
	    printTime(prefix);
	}

};

#endif
