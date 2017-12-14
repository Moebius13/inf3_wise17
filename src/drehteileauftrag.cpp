#pragma once
#include "auftrag.cpp"
#include "vmantriebswellen.cpp"
#include "vmspindeln.cpp"

class DrehteileAuftrag:Auftrag {
  private:
    VMAntriebswellenAuftrag *VMAntriebswellen;
    VMSpindelnAuftrag *VMSpindeln;
  public:
    DrehteileAuftrag(Produkt *P)
    {
      Auftrag(P);
    }
};
