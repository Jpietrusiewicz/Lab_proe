#pragma once
#include "Skarb.h"

class Skrzynia {
private:
  const int pojemnosc;
  Skarb* skarby;
  int iloscSkarbow;

public:
  void dodajSkarb(Skarb);
  void wypiszSkarby();
  Skrzynia (int);
  Skrzynia (const Skrzynia&);
  ~Skrzynia ();
};
