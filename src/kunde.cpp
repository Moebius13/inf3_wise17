#include <iostream>
#include <string>
using namespace std;
#include "kunde.h"
#include "auftrag.cpp"
#include "produkt.cpp"



int main()
{
  Kunde Alice{"Alice",2};
  //Kunde().neu_Kunde("Bob", 1);
  Alice.print();
  Auftrag A{NULL};
  Auftrag B{&A};
  A.print();
  B.print();
  return 0;
}
