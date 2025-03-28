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
    car* rentcars; //LIST OF ALL rented CARS
    int* duration;
    int numrentcars;
    static const int maxrentcars = 10;

public:
    customer    ();
    customer    (string,string,string,int);
    customer    (const customer&);
    virtual ~customer();

    string  getName() const;
    string  getPhone() const;
    string  getAddress() const;
    int     getNumber() const;

    void    rentcar(car&c,int weeks); //we pass by reference to avoid the copy situation
    void    returncar(car& c); // same reason here
    void    listallcars()const;
    bool    searchcar(string)const;
    bool    searchcar(int)const;

    virtual void print()const;
};



#endif //CUSTOMER_H
//supppp
