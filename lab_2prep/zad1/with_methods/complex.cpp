#include "complex.h"
#include <iostream>
#include <cmath>
#define EPS 0.0000001
Complex::Complex()
{re_=1.0; im_=0.0;}
Complex::Complex(float re, float im)
{ re_=re; im_=im; }
Complex Complex::tempComplex;;

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
void Complex::displayData(std::string t)
{
  std::cout<<t<<": "<<"re="<<re_<<"  im= "<<im_<<std::endl;
}
void Complex::operator+=(const Complex & dodawana){
  re_+=dodawana.re_;
  im_+=dodawana.im_;
}
Complex& Complex::operator*(const Complex& DoMnozenia2){
  tempComplex.re_=  re_*DoMnozenia2.re_ -   im_*DoMnozenia2.im_;
  tempComplex.im_=  re_*DoMnozenia2.im_ +   im_*DoMnozenia2.re_;
  return tempComplex;
}
void Complex::operator*=( const Complex&  DoMnozenia){
  int re_helper=   re_;
    re_= re_helper*DoMnozenia.re_ -   im_*DoMnozenia.im_;
    im_= re_helper*DoMnozenia.im_ +   im_*DoMnozenia.re_;
}

 bool Complex::operator==(const Complex& z2){
  if((  re_ - z2.re_ )< EPS&&(  re_ - z2.re_ )>-EPS){
    return false;
  }
  if((  im_ - z2.im_ )< EPS&&(  im_ - z2.im_ )>-EPS){
      return false;
  }
  return true;
}
 bool Complex::operator!=(const Complex& z2){
  if((  re_ - z2.re_ )< EPS&&(  re_ - z2.re_ )>-EPS){
    return true;
  }
  if((  im_ - z2.im_ )< EPS&&(  im_ - z2.im_ )>-EPS){
      return true;
  }
  return false;
}
 bool Complex::operator>(const Complex& z2){
  double mod1 = (pow(  re_,2)+pow(  im_,2));
  double mod2 = (pow(z2.re_,2)+pow(z2.im_,2));
  if(mod2>mod1){
    return false;
  }
  if((mod1 - mod2 )< EPS&&(mod1 - mod2 )>-EPS){
      return false;
  }
  return true;
}
 bool Complex::operator<( const Complex& z2){
  double mod1 = (pow(  re_,2)+pow(  im_,2));
  double mod2 = (pow(z2.re_,2)+pow(z2.im_,2));
  if(mod1>mod2){
    return false;
  }
  if((mod1 - mod2 )< EPS&&(mod1 - mod2 )>-EPS){
      return false;
  }
  return true;
}
 bool Complex::operator>=(const Complex& z2){
  double mod1 = (pow(  re_,2)+pow(  im_,2));
  double mod2 = (pow(z2.re_,2)+pow(z2.im_,2));
  if(mod2<mod1){
    return true;
  }
  if((mod1 - mod2 )< EPS&&(mod1 - mod2 )>-EPS){
      return true;
  }
  return false;
}
 bool Complex::operator<=( const Complex& z2){
  double mod1 = (pow(  re_,2)+pow(  im_,2));
  double mod2 = (pow(z2.re_,2)+pow(z2.im_,2));
  if(mod1<mod2){
    return true;
  }
  if((mod1 - mod2 )< EPS&&(mod1 - mod2 )>-EPS){
      return true;
  }
  return false;
}
 Complex& Complex::operator^(int potega){
    double mod = sqrt(pow(  re_,2) + pow(  im_,2));
    double cosangle = acos((  re_/mod));
    double sinangle = asin((  im_/mod));

    tempComplex.re_=pow(mod,potega)*cos(cosangle*potega);
    tempComplex.im_=pow(mod,potega)*sin(sinangle*potega);
    if(  re_==0){
      tempComplex.re_=0;//dlatego ze arccos(0)=pi/2
    }
    return tempComplex;
}
