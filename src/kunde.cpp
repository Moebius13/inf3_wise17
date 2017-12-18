#ifndef _KUNDE_MAIN
#define _KUNDE_MAIN
#include <iostream>
#include <string>
using namespace std;
#include "kunde.h"
#include "auftrag.cpp"
#include "produkt.cpp"



int main()
{
  Kunde* Alice= new Kunde("Alice",2);
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
#endif
