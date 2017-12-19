#ifndef _PRODUKT
#define _PRODUKT
#include "auftrag.cpp"
#include "drehteileauftrag.h"
#include "kubischerauftrag.h"
#include "elektroauftrag.h"
class FertigungsAuftrag;

class Produkt:Auftrag {
private:
    const DrehteilAuftrag*  Drehteile;
    const KubischerAuftrag* Kubischer;
    const ElektroAuftrag*   Elektro;
public:
  Produkt(const FertigungsAuftrag* F):Auftrag((Auftrag*)F){}
  //apparently this ^ is how to call superclass constructors according to stackoverflow - kinda wierd
  void makeSub(){
    Drehteile = new DrehteilAuftrag(this);
    Kubischer = new KubischerAuftrag(this);
    Elektro   = new ElektroAuftrag(this);
  }
  ~Produkt(){
    delete Drehteile;
    delete Kubischer;
    delete Elektro;
  }
};
#endif
