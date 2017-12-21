#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include "kunde.cpp"
#include "auftrag.cpp"
#include "produkt.cpp"
#include "fertigungsauftrag.cpp"

using namespace std;

int main(int argc, char** argv){
    
    
    cout<<"Testing Object 'Kunde'"<<endl;
    Kunde* Alice = new Kunde("Alice",2);
    //Kunde().neu_Kunde("Bob", 1);
    Alice->print();
    cout<<"Testing Product Tree building"<<endl;
    FertigungsAuftrag* top = new FertigungsAuftrag(Alice);
    Produkt* prod = new Produkt(top);
    top->setProdukt(prod);
    top->Fertigungsbeginn=time(NULL);
    //time_t* startDate=time(NULL);
    //MAGIC!
    top->DLZ=prod->makeSub(top->Fertigungsbeginn);
    top->Deadline=top->Fertigungsbeginn + top->DLZ;
    top->print("");
    printf("That's All Folks!\n");
    delete prod;
    delete top;
    delete Alice;
    return 0;
}
