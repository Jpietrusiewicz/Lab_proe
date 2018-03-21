#include "fraction.h"


int main(){
  Fraction f(1,2);
  Fraction f2(1,4);
  f+=f2;
  std::cout <<f <<std::endl;
  if(f>f2)
    std::cout <<f2 <<std::endl;
  Fraction f3(1,7),f4(1,13);
  std::cout << f3+f4<<std::endl;
  Fraction f5;
  std::cin >>f5;
  if(f5>=f3+f4)
    std::cout << f5<<std::endl;
}
