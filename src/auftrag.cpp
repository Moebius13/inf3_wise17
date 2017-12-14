#pragma once

#include "eckdaten.cpp"
#include <iostream>

using namespace std;

class Auftrag:Eckdaten {
private:
  Auftrag *metaRef;
public:
  Auftrag(Auftrag *Ref){
    Eckdaten();
    metaRef = Ref;
  }
  void print() {
  cout << metaRef << endl;
  }
};
