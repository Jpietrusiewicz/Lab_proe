#include "Skrzynia.h"
#include "Skarb.h"
#include <iostream>

Skrzynia::Skrzynia(int pojemnoscToBe):pojemnosc(pojemnoscToBe),iloscSkarbow(0),skarby(new Skarb[pojemnosc]) {

}

Skrzynia::Skrzynia(const Skrzynia& staraSkrzynia):pojemnosc(staraSkrzynia.pojemnosc){
  skarby = new Skarb [pojemnosc];
  for(int a =0 ; a < pojemnosc;a++){
    (skarby[a]) = (staraSkrzynia.skarby[a]);
  }
  iloscSkarbow = staraSkrzynia.iloscSkarbow;
}
Skrzynia::~Skrzynia(){
  delete[] skarby;
}
void  Skrzynia::dodajSkarb(Skarb nowySkarb){
  if(iloscSkarbow <pojemnosc){
    (skarby[iloscSkarbow]) = nowySkarb;
    iloscSkarbow++;
  }
  else{
    std::cout << " nie ma miejsca w skrzyni\n";
  }
}
void Skrzynia::wypiszSkarby(){
  std::cout << " Skarby w skrzyni:\n";
  for(int a =0 ; a < iloscSkarbow;a++){
    skarby[a].getNameAndValue();
  }
}
