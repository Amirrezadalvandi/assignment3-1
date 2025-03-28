//
// Created by dalva on 2025-03-11.
//

#ifndef COMPANY_H
#define COMPANY_H
#include "customer.h"
#include "car.h"
#include <iostream>
#include <string>
#include<string>
using namespace std;

class company {
private:
    string name;
    string address;
    car** cars;
    int numcars;

    customer** customers;
    int numcustomers;
public:
    company();
    company(string,string);
    company(const company&);
     virtual~company();

    string getName();
    string getAddress();
    void setName(string);
    void setAddress(string);

    // subsystems dealing with customers (like the book in example)
    void addclient(customer*);
    void removeclient(customer* c);
    void listclients()const;
    bool searchclient(string) const;

    // subsystems dealing with cars(like the person in example)
    void addcar( car*);
    void removecar(int id);
    void listcars()const;
    bool searchcar(int)const;
};



#endif //COMPANY_H
