#ifndef FERTIGUNG
#define FERTIGUNG
#include <time.h>
#include "auftrag.cpp"
#include "produkt.cpp"

class Kunde;

class FertigungsAuftrag:public Auftrag {
    private:
	Produkt* Endprodukt;
	Kunde*   Auftraggeber;
    public:
	FertigungsAuftrag(Kunde* K):Auftrag(NULL){
	    Auftraggeber=K;
	}
	setProdukt(Produkt* P){
	    Endprodukt=P;
	}
	void print(const char* prefix){
	    printf("%sFertigungsauftrag #%i für Produkt #%i[%s]\n",prefix,this,Endprodukt,this->Status);
	    printf("%sFertigungsbeginn: %s",prefix,ctime(&Fertigungsbeginn));
	    printf("%sFrühester Fertigungszeitpunkt: %s",prefix,ctime(&Deadline));
	    printTime(prefix);
	    Endprodukt->print("|");
	    printf("/\n");
	}
};

#endif
