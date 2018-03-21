#include "fraction.h"
#define EPS 0.0001

Fraction Fraction::tempFraction;

Fraction::Fraction(){
  numerator = 1;
  denominator =1;
}

Fraction::Fraction(int n, int m){
  if(m==0){
    std::cout << ";))))\n";
    m=1;
  }
  numerator=n;
  denominator=m;
}

Fraction& operator+(const Fraction& u1,const Fraction& u2){
  if(u1.denominator==u2.denominator){
    Fraction::tempFraction.numerator= u1.numerator+u2.numerator;
    Fraction::tempFraction.denominator = u1.denominator;
    return Fraction::tempFraction;
  }
  Fraction::tempFraction.numerator=u1.numerator*u2.denominator+u2.numerator+u1.denominator;
  Fraction::tempFraction.denominator = u1.denominator*u2.denominator;
  return Fraction::tempFraction;
}

void operator+=(Fraction& u1,const Fraction& u2){
  if(u1.denominator==u2.denominator){
     u1.numerator+=u2.numerator;
    return;
  }
  u1.numerator=u1.numerator*u2.denominator+u2.numerator*u1.denominator;
  u1.denominator *=u2.denominator;
}
Fraction& operator*(const Fraction& u1,const Fraction& u2){
  Fraction::tempFraction.numerator= u1.numerator*u2.numerator;
  Fraction::tempFraction.denominator=u1.denominator*u2.denominator;
  return Fraction::tempFraction;
}
void operator*=( Fraction& u1,const Fraction& u2){
  u1.numerator*=u2.numerator;
  u1.denominator*=u2.denominator;
}
bool operator==(const Fraction& u1,const Fraction& u2){
  double l1 = (double)u1.numerator/u1.denominator;
  double l2 = (double)u2.numerator/u2.denominator;
  if(l2-l1<EPS&&l1-l2<EPS){
    return true;
  }
  return false;
}
bool operator!=(const Fraction& u1,const Fraction& u2){
  double l1 = (double)u1.numerator/u1.denominator;
  double l2 = (double)u2.numerator/u2.denominator;
  if(l2-l1<EPS&&l1-l2<EPS){
    return false;
  }
  return true;
}
bool operator>(const Fraction& u1,const Fraction& u2){
  double l1 = (double)u1.numerator/u1.denominator;
  double l2 = (double)u2.numerator/u2.denominator;
  if(l1>l2){
    return true;
  }
  return false;
}
bool operator<(const Fraction& u1,const Fraction& u2){
  double l1 = (double)u1.numerator/u1.denominator;
  double l2 = (double)u2.numerator/u2.denominator;
  if(l1<l2){
    return true;
  }
  return false;
}
bool operator<=(const Fraction& u1,const Fraction& u2){
  double l1 = (double)u1.numerator/u1.denominator;
  double l2 = (double)u2.numerator/u2.denominator;
  if(l1>l2){
    return false;
  }
  return true;
}
bool operator>=(const Fraction& u1,const Fraction& u2){
  double l1 = (double)u1.numerator/u1.denominator;
  double l2 = (double)u2.numerator/u2.denominator;
  if(l1<l2){
    return false;
  }
  return true;
}

std::ostream& operator<<(std::ostream& os, const Fraction& u){
  os << "(" << u.numerator <<"/"<<u.denominator<<") " ;
  return os;
}
std::istream& operator>>(std::istream& is, Fraction& u){
  is>>u.numerator;
  char c=is.get();
  if(c=='/') {
    is>>u.denominator;
  }
  else
  {
      is.unget();
      u.denominator=1;
  }
  return is;
}
