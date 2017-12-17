#pragma once
#include "auftrag.cpp"
#include "drehteileauftrag.cpp"
#include "kubischerauftrag.cpp"
#include "elektroauftrag.cpp"
#include "fertigungsauftrag.cpp"
class Produkt:Auftrag {
private:
    DrehteileAuftrag *Drehteile;
    KubischerAuftrag *Kubischer;
    //extern ElektroAuftrag *Elektro;
public:
  Produkt(Fertigungsauftrag F):Auftrag(F){}
  //apparently this ^ is how to call superclass constructors according to stackoverflow
  void makeSub(){
    Drehteile = new DrehteileAuftrag(this);
    Kubischer = new KubischerAuftrag(this);
    //Elektro = new ElektroAuftrag(this);
  }
  ~Produkt(){
    delete Drehteile;
    delete Kubischer;
    //delete Elektro;
  }
};
