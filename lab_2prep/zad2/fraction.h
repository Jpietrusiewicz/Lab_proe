#include <iostream>

class Fraction {
private:
  int numerator;
  int denominator;
  static Fraction tempFraction;
public:
  Fraction ();
  Fraction(int , int =1);

  friend Fraction& operator+(const Fraction&,const Fraction&);
  friend void operator+=(Fraction&,const Fraction&);
  friend Fraction& operator*(const Fraction&,const Fraction&);
  friend void operator*=(Fraction&,const Fraction&);

  friend bool operator==(const Fraction&,const Fraction&);
  friend bool operator!=(const Fraction&,const Fraction&);
  friend bool operator>(const Fraction&,const Fraction&);
  friend bool operator<(const Fraction&,const Fraction&);
  friend bool operator>=(const Fraction&,const Fraction&);
  friend bool operator<=(const Fraction&,const Fraction&);
  friend std::ostream& operator<<(std::ostream& , const Fraction&);
  friend std::istream& operator>>(std::istream& , Fraction&);

};
