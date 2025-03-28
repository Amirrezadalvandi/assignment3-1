//
// Created by dalva on 2025-03-11.
// Amirreza Dalvandi 40249817

#include "standardcar.h"
#include <string>
#include <iostream>
using namespace std;

standardcar:: standardcar():car(0,"",true){}
standardcar::standardcar(int id1, string type1,bool av):car (id1, type1, av){}
standardcar::standardcar(const standardcar& anothercar):car(anothercar){}

void standardcar::print()const{
cout<<"standard car ID: " << getCarid() <<endl;
cout << "standard car type: " << getType() << endl;
cout << "car availability: " << getAvailability() << endl;
}
standardcar::~standardcar() { }
