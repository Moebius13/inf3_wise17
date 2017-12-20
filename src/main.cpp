#include <iostream>
#include <string>
#include "kunde.h"
#include "auftrag.h"
#include "produkt.h"

using namespace std;

int main(int argc, char** argv){
    Kunde* Alice = new Kunde("Alice",2);
    //Kunde().neu_Kunde("Bob", 1);
    Alice->print();
    delete Alice;
    Auftrag* A = new Auftrag(NULL);
    Auftrag* B = new Auftrag(A);
    A->print();
    B->print();
    delete A;
    delete B;
    return 0;
}
