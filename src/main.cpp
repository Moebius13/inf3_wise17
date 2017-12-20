#include <iostream>
#include <string>
#include <time.h>
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
    //MAGIC!
    prod->makeSub();
    top->print("");
    printf("/\n");
    delete prod;
    delete top;
    delete Alice;
    return 0;
}
