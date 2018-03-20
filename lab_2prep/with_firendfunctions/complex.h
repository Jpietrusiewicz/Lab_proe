#pragma once
#include<string>
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
  friend void   operator+=(Complex&, const Complex&);
  friend Complex& operator*(const Complex& ,const Complex&);
  friend void  operator*=(Complex& ,const Complex&);

  friend bool operator==(const Complex&, const Complex&);
  friend bool operator!=(const Complex&, const Complex&);
  friend bool operator>(const Complex&, const Complex&);
  friend bool operator<(const Complex&, const Complex&);
  friend bool operator>=(const Complex&, const Complex&);
  friend bool operator<=(const Complex&, const Complex&);
  friend Complex& operator^(const Complex&, int);


  void displayData(std::string);
};
