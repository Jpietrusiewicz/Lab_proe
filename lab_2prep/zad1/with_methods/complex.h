#pragma once
#include <string>
class Complex
{
  float re_;
  float im_;
  static Complex tempComplex;
public:
  Complex();
  Complex(float re, float im=0);
  Complex& operator++();
  Complex operator++(int);
  void   operator+=(const Complex&);
  Complex& operator*(const Complex&);
  void  operator*=(const Complex&);

  bool operator==(const Complex&);
  bool operator!=(const Complex&);
  bool operator>(const Complex&);
  bool operator<(const Complex&);
  bool operator>=(const Complex&);
  bool operator<=(const Complex&);
  Complex& operator^(int);
  void displayData(std::string);
};
