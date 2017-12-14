#include <iostream>
#include <string>
using namespace std;
#include "Kunde.h"

//Deklaration
Kunde::Kunde() {}
Kunde::Kunde(string K_name, int K_num)
    : Kundenname{K_name}, Kundennummer{K_num} {}

/*
int main()
{
  Kunde Bob{};
  Bob.neu_Kunde("Bob", 1);
  Bob.print();
  return 0;
}
*/
