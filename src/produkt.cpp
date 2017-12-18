#ifndef _PRODUKT
#define _PRODUKT
#include "auftrag.cpp"
#include "drehteileauftrag.cpp"
#include "kubischerauftrag.cpp"
#include "elektroauftrag.cpp"
#include "fertigungsauftrag.cpp"
class Produkt:Auftrag {
private:
    const DrehteileAuftrag* Drehteile;
    const KubischerAuftrag* Kubischer;
    //extern ElektroAuftrag *Elektro;
public:
  Produkt(const Fertigungsauftrag* F):Auftrag(F){}
  //appafriend rently this ^ is how to call superclass constructors according to stackoverflow - kinda wierd
  friend void makeSub(){
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
#endif
