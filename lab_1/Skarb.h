#pragma once
#include <string>
class Skarb {
private:
  std::string nazwa;
  int wartosc;

public
:
  void getNameAndValue();
  Skarb ();
  Skarb (int , std::string);
  Skarb(const Skarb&);
  ~Skarb ();
};
