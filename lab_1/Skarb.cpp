#include "Skarb.h"
#include <iostream>

Skarb::Skarb(){
  nazwa = "domyślny skarb";
  wartosc = 5;
}

Skarb::Skarb(int valueToBe, std::string nameToBe){
  nazwa = nameToBe;
  wartosc = valueToBe;
}
Skarb::Skarb(const Skarb& staryZiomek){
  nazwa = staryZiomek.nazwa;
  wartosc = staryZiomek.wartosc;
}

void Skarb::getNameAndValue(){
  std::cout << "nazwa: "<< nazwa<< " wartosc: " << wartosc << std::endl;
}
Skarb::~Skarb(){}
