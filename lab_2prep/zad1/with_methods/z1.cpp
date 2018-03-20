#include <iostream>
#include "complex.h"

int main(){
  Complex c1;
  Complex c2(1,3);
  Complex c3(1,-3);
  c1= c2*c3;
  c1.displayData("c1");
  c1 = c1^2;
  c1.displayData("c1");
  Complex c5(0,100);
  c5= c5^5;
  c5.displayData("c5");
}
