#include"prostokat.h"

Prostokat::Prostokat(){
    w_=1;
    h_=1;
}
Prostokat::Prostokat(int w, int h){
    w_=w;
    h_=h;
}

void Prostokat::operator=(const Prostokat& stary){
    w_ = stary.w_;
    h_ = stary.h_;
}
bool Prostokat::operator==( const Prostokat& prawy){
    return ((w_=prawy.w_)&&(h_==prawy.h_));
}
Prostokat Prostokat::operator+(const Prostokat& prawy){
    return(Prostokat(w_+prawy.w_,h_+prawy.h_));
}
Prostokat Prostokat::operator*(unsigned int skalar){
    return(Prostokat(w_*skalar, h_*skalar));
}

std::ostream& operator<<(std::ostream& os, const Prostokat& doWyswietlenia){
    os<< "Prostokat: w= "<<doWyswietlenia.w_<< " h= " << doWyswietlenia.h_<<std::endl;
    return os;
}
Prostokat operator*(unsigned int skalar, const Prostokat& stary){
    return(Prostokat(stary.w_*skalar,stary.h_*skalar));
}