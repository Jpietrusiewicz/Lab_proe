#include<iostream>
#pragma once
class Prostokat{
private:
    unsigned int w_;
    unsigned int h_;
public:
    Prostokat();
    Prostokat(int,int=1);
    Prostokat(const Prostokat&);
    
    void operator=(const Prostokat&);
    bool operator==(const Prostokat&);
    Prostokat operator+(const Prostokat&);
    Prostokat operator*(unsigned int);
    
    
    friend std::ostream& operator<<(std::ostream&,const Prostokat&);
    friend Prostokat operator*(unsigned int ,const Prostokat&);


};