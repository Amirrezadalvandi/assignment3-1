//
// Created by dalva on 2025-03-11.
// Amirreza Dalvandi 40249817

#ifndef LUXURYCAR_H
#define LUXURYCAR_H
#include <iostream>
#include <string>

#include "car.h"
using namespace std;


class luxurycar:public car {

public:
    luxurycar();
    luxurycar(int,string,bool);
    luxurycar(const luxurycar &);
    virtual  ~luxurycar();
    virtual void print() const;
};



#endif //LUXURYCAR_H
