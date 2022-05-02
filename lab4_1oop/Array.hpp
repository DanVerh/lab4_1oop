#pragma once
#include "Norma.hpp"

class Array:public NormaClass{
private:
    double arr[2][2];
public:
    Array();
    Array(double, double, double, double);
    
    virtual double Norma();
};
