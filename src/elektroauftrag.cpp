#ifndef ELEKTRO
#define ELEKTRO
#include "auftrag.cpp"
#include "schaltschrankauftrag.cpp"

class Produkt;

class ElektroAuftrag:public Auftrag {
    private:
	SchaltschrankAuftrag* Schaltschrank;
    public:
	ElektroAuftrag(Produkt* P):Auftrag((Auftrag*) P){
	    DLZ=8*DAY_FACT;
	}
	time_t makeSub(const time_t start){
	    Schaltschrank = new SchaltschrankAuftrag(this);
	    time_t t1=Schaltschrank->makeSub(start);
	    this->Fertigungsbeginn=t1+start;
	    return t1+this->DLZ;
	}
	void print(const char* prefix){
	    printf("%sElektrikauftrag #%i[%s]\n",prefix,this,this->Status);
	    Schaltschrank->print("|||");
	    printf("%s/\n",prefix);
	}
	~ElektroAuftrag(){
	    delete Schaltschrank;
	}
};

#endif
