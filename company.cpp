//
// Created by dalva on 2025-03-11.
//amirreza dalvandi 40249817

#include "company.h"
company::company() {
    name = "";
    address = "";
    cars= new car*[1000];
    customers=new customer*[1000];
}
company::company(string name1, string address1) {
    name=name1;
    address=address1;
    cars= new car*[1000];
    customers=new customer*[1000];
}
company::company(const company & comp) {
    name=comp.name;
    address=comp.address;
    cars= new car*[1000];
    customers=new customer*[1000];
}
company::~company() {
    delete [] cars;
    delete [] customers;
}

