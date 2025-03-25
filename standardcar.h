//
// Created by dalva on 2025-03-11.
//Amirreza dalvandi 40249817

#ifndef STANDARDCAR_H
#define STANDARDCAR_H
#include"car.h"
#include<iostream>
using namespace std;

class standardcar: public car {

public:
    standardcar();
    standardcar( const standardcar&);
    standardcar(int, string, bool);
    virtual ~standardcar();

    virtual void print() const;


};



#endif //STANDARDCAR_H
