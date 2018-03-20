#include "complex.h"
#include <iostream>
#include <cmath>
#define EPS 0.00001
Complex::Complex()
{re_=1.0; im_=0.0;}
Complex::Complex(float re, float im)
{ re_=re; im_=im; }
Complex& Complex::operator++()
{
  re_+=1.0;
  return *this;
}
Complex Complex::operator++(int)
{
  re_+=1.0;
  return Complex(re_-1.0,im_);
}
Complex Complex::tempComplex;
void Complex::displayData(std::string t)
{
  std::cout<<t<<": "<<"re="<<re_<<"  im= "<<im_<<std::endl;
}

void operator+=( Complex& DoDodania,const Complex & dodawana){
  DoDodania.re_+=dodawana.re_;
  DoDodania.im_+=dodawana.im_;
}
Complex& operator*(const Complex& DoMnozenia1,const Complex& DoMnozenia2){
  Complex::tempComplex.re_=DoMnozenia1.re_*DoMnozenia2.re_ - DoMnozenia1.im_*DoMnozenia2.im_;
  Complex::tempComplex.im_=DoMnozenia1.re_*DoMnozenia2.im_ + DoMnozenia1.im_*DoMnozenia2.re_;
  return Complex::tempComplex;
}
void operator*=(Complex& DoWymnozenia, const Complex&  DoMnozenia){
  int re_helper= DoWymnozenia.re_;
  DoWymnozenia.re_= re_helper*DoMnozenia.re_ - DoWymnozenia.im_*DoMnozenia.im_;
  DoWymnozenia.im_= re_helper*DoMnozenia.im_ + DoWymnozenia.im_*DoMnozenia.re_;
}

 bool operator==(const Complex& z1, const Complex& z2){
  if((z1.re_ - z2.re_ )< EPS&&(z1.re_ - z2.re_ )>-EPS){
    return false;
  }
  if((z1.im_ - z2.im_ )< EPS&&(z1.im_ - z2.im_ )>-EPS){
      return false;
  }
  return true;
}
 bool operator!=(const Complex& z1, const Complex& z2){
  if((z1.re_ - z2.re_ )< EPS&&(z1.re_ - z2.re_ )>-EPS){
    return true;
  }
  if((z1.im_ - z2.im_ )< EPS&&(z1.im_ - z2.im_ )>-EPS){
      return true;
  }
  return false;
}
 bool operator>(const Complex& z1, const Complex& z2){
  double mod1 = (pow(z1.re_,2)+pow(z1.im_,2));
  double mod2 = (pow(z2.re_,2)+pow(z2.im_,2));
  if(mod2>mod1){
    return false;
  }
  if((mod1 - mod2 )< EPS&&(mod1 - mod2 )>-EPS){
      return false;
  }
  return true;
}
 bool operator<(const Complex& z1, const Complex& z2){
  double mod1 = (pow(z1.re_,2)+pow(z1.im_,2));
  double mod2 = (pow(z2.re_,2)+pow(z2.im_,2));
  if(mod1>mod2){
    return false;
  }
  if((mod1 - mod2 )< EPS&&(mod1 - mod2 )>-EPS){
      return false;
  }
  return true;
}
 bool operator>=(const Complex& z1, const Complex& z2){
  double mod1 = (pow(z1.re_,2)+pow(z1.im_,2));
  double mod2 = (pow(z2.re_,2)+pow(z2.im_,2));
  if(mod2<mod1){
    return true;
  }
  if((mod1 - mod2 )< EPS&&(mod1 - mod2 )>-EPS){
      return true;
  }
  return false;
}
 bool operator<=(const Complex& z1, const Complex& z2){
  double mod1 = (pow(z1.re_,2)+pow(z1.im_,2));
  double mod2 = (pow(z2.re_,2)+pow(z2.im_,2));
  if(mod1<mod2){
    return true;
  }
  if((mod1 - mod2 )< EPS&&(mod1 - mod2 )>-EPS){
      return true;
  }
  return false;
}
 Complex& operator^(const Complex& podstawa,int potega){
    double mod = sqrt(pow(podstawa.re_,2) + pow(podstawa.im_,2));
    double cosangle = acos((podstawa.re_/mod));
    double sinangle = asin((podstawa.im_/mod));

    Complex::tempComplex.re_=pow(mod,potega)*cos(cosangle*potega);
    Complex::tempComplex.im_=pow(mod,potega)*sin(sinangle*potega);
    if(podstawa.re_==0){
      Complex::tempComplex.re_=0;//dlatego ze arccos(0)=pi/2
    }
    return Complex::tempComplex;
}
