//
// Created by dalva on 2025-03-11.
//Amirreza Dalvandi 40249817

#include "luxurycar.h"
#include <iostream>
#include <string>
using namespace std;


luxurycar::luxurycar():car(0,"",true) {}
luxurycar::luxurycar(int id1,string type1,bool av):car(id1,type1,av) {}
luxurycar::luxurycar(const luxurycar & anothercar):car(anothercar) {}

void luxurycar::print() const {
    cout << "the luxury car informatio:" << getCarid() << endl;
    cout << "the luxury car type:" << getType() << endl;
}

luxurycar::~luxurycar() { }
