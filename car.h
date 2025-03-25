//
// Created by dalva on 2025-03-11.
//Amirreza Dalvandi 40249817


#include<iostream>
using namespace std;

#ifndef CAR_H
#define CAR_H



class car {
private:
    int Carid;
    string Type;
    bool Availability;
public:
    car();
    car(int, string, bool);
    car(const car& anothercar);


    int getCarid() const;
    string getType() const;
    bool getAvailability() const;
    void setavailability(bool);
    void setCarid(int);
    void setType(string);
    void print() const;
};



#endif //CAR_H

