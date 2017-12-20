#ifndef _KUNDE
#define _KUNDE
#include <iostream>
#include <string>

using namespace std;

class Kunde{
    private:
	//Daten
	string Kundenname;
	int Kundennummer;
    public:
	//Konstruktorn
	Kunde();
	Kunde(string name, int num){
	    Kundenname=name;
	    Kundennummer=num;
	}
	const string& getName(){return Kundenname;}
	int getID(){return Kundennummer;}
	void print(){
	    cout << "Kundenname:" << getName() << endl;
	    cout << "Kundennummer:" << getID() << endl;
	}
};

#endif
