#ifndef _KUNDE_H_
#define _KUNDE_H_
#include <iostream>
#include <string>

using namespace std;

class Kunde{
    private:
	//Daten
	const string Kundenname;
	const int Kundennummer;
    public:
	//Konstruktorn
	Kunde();
	Kunde(string name, int num);
	const string& getName();
	const int getID();
	void print();
};

#endif
