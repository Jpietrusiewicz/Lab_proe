#include <iostream>
#include "Skarb.h"
#include "Skrzynia.h"
int main() {
  Skarb skarb1(1000, "naszyjnik");
  Skarb skarb2(3, "but");
  Skarb skarb3(100, "piniondz");
  Skarb skarb4(6345, "kolarz");
  Skarb skarb5(376, "plyta");
  Skarb skarbKopia2(skarb2);
  Skrzynia pierwszaSkrzynia(7);
  pierwszaSkrzynia.dodajSkarb(skarb1);
  pierwszaSkrzynia.dodajSkarb(skarb2);
  pierwszaSkrzynia.dodajSkarb(skarb3);
  pierwszaSkrzynia.dodajSkarb(skarb4);
  pierwszaSkrzynia.dodajSkarb(skarb5);
  pierwszaSkrzynia.dodajSkarb(skarbKopia2);
  Skrzynia drugaSkrzynia(pierwszaSkrzynia);
  drugaSkrzynia.dodajSkarb(Skarb(5,"gral"));
  pierwszaSkrzynia.wypiszSkarby();
  drugaSkrzynia.wypiszSkarby();
  return 0;
}
