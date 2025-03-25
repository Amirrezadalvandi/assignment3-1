//
// Created by dalva on 2025-03-11.
//Amirreza Dalvandi 40249817

#ifndef CUSTOMER_H
#define CUSTOMER_H
#include<string>
#include<iostream>
#include "car.h"
using namespace std;


class customer {
protected:
    string name;
    string phone;
    string address;
    int number;
    car* cars; //LIST OF ALL CARS
    int numcars;
    int duration;
public:
    customer    ();
    customer    (string,string,string,int,int);
    customer    (const customer&); //copy constructor
    virtual ~customer();

    string  getName() const;
    string  getPhone() const;
    string  getAddress() const;
    int     getNumber() const;
    void    setduration(int);
    int     getduration() const;
    void    rentcar(car& c); //we pass by reference to avoid the copy situation
    void    returncar(car& c); // same reason here
    void    listallcars()const;
    bool    searchcar(string)const;
    bool    searchcar(int)const;

    virtual void print()const=0;
};



#endif //CUSTOMER_H
//supppp
