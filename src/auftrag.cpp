#pragma once
#include "eckdaten.cpp"
#include <iostream>
#include <stdio.h>

using namespace std;

class Auftrag:Eckdaten {
private:
  Auftrag& metaRef;
public:
  Auftrag(){
      metaRef=NULL;
  }//shutup compiler...
  Auftrag(Auftrag& Ref){
//  Eckdaten(); //not needed, no-arg constructor call is automatic if nothing else is goven
    metaRef = Ref;
  } 
  void makeSub();
  void print() {
    printf("%p\n",metaRef);
  }
};
