#ifndef _KUBISCH
#define _KUBISCH
#include "auftrag.cpp"
#include "produkt.cpp"
#include "fzmotorenauftrag.cpp"
#include "fzvorschubgetriebeauftrag.cpp"
#include "fzstaenderauftrag.cpp"
#include "fzarbeitstischeauftrag.cpp"

class KubischerAuftrag:Auftrag {
private:
  FZArbeitstischeAuftrag* FZArbeitstische;
  FZMotorenAuftrag* FZMotoren;
  FZStaenderAuftrag* FZStaender;
  FZVorschubgetriebeAuftrag* FZVorschubgetriebe;
public:
  KubischerAuftrag(Produkt* P):Auftrag(P){}
};
#endif
