#ifndef KUNDE_H
#define KUNDE_H
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
