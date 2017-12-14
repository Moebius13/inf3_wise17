#ifndef _KUNDE_H_
#define _KUNDE_H_
#include <iostream>
#include <string>
using namespace std;

class Kunde
{
private:
    //Daten
    string Kundenname{""};
    int Kundennummer;
public:
    //Konstruktorn
    Kunde();
    Kunde(string name, int num) { Kundenname=name; Kundennummer=num; }
  //  ~Kunde();
    //Methoden
    const string& get_Kundenname() {return Kundenname;}
    int get_Kundennummer() {return Kundennummer;}

    void print()
    {
      cout << "Kundenname:" << get_Kundenname() << endl;
      cout << "Kundennummer:" << get_Kundennummer() << endl;
    }
};
#endif
