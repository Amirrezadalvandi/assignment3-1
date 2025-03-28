//
// Created by dalva on 2025-03-11.
//Amirreza Dalvandi 40249817

#include "car.h"
#include<iostream>
using namespace std;

car::car() {
    Carid =0;
    Type  ="";
    Availability  = true;


};
car::car(int id1,string type1,bool av ) {
    Carid = id1;
    Type = type1;
    Availability = av;
};
car::car(const car& anothercar) {
    Carid = anothercar.Carid;
    Type = anothercar.Type;
    Availability = anothercar.Availability;
};


int     car::getCarid()const           {return Carid;}
string  car::getType()const            {return Type;}
bool    car::getAvailability()const    {return Availability;}
void    car::setCarid(int id1)         {Carid = id1;}
void    car::setType(string type)      {Type = type;}
void    car::setavailability(bool)     {Availability = true;}

void car::print() const
{
    cout<<"the car information:"<<endl;
    cout<<"Carid: "<<Carid<<endl;
    cout<<"Type: "<<Type<<endl;
    cout<<"Availability: "<<Availability<<endl;
}
