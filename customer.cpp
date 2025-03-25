 //
// Created by dalva on 2025-03-11.
//amirreza dalvandi 40249817

#include "customer.h"
#include "car.h"
#include<string>
#include<iostream>
using namespace std;

customer::customer() {
 name = "";
 phone= "";
 address = "";
 number = 0;
 duration= 0;
}
customer::customer(string n, string ph, string ad , int num, int d) {
 name = n;
 phone = ph;
 address = ad;
 number = num;
 duration = d;
}
customer::customer(const customer & anothercustomer) {
 name = anothercustomer.name;
 phone = anothercustomer.phone;
 address = anothercustomer.address;
 number = anothercustomer.number;
 duration = anothercustomer.duration;
}
 customer::~customer() {}


string customer::getName()const { return name; }
string customer::getPhone()const { return phone; }
string customer::getAddress()const { return address; }
int customer::getNumber()const { return number; }
int customer::getduration() const {return duration;}


//rentcar
void customer::rentcar(car & c) {
 if (c.getAvailability()) {
  c.setavailability(false);
  cars[numcars]=c;
  numcars++;
 }
 else {
  cout<<"There is no car available"<<endl;
 }
}

//returncar
void customer::returncar(car &c) {
 for (int i = 0; i < numcars; i++) {
  if (cars[i].getAvailability()==c.getAvailability()) {
   for (int j = 0; j < numcars-1; j++) {
    cars[j] = cars[j+1];
   }
   c.setavailability(true);
   numcars--;
   return;
  }
 }
 cout<< c.getCarid()<<" is not rented by"<<name<<endl;
}

//display of all the cars the person is currently renting
void customer::listallcars() const {
 for (int i = 0; i < numcars; i++)
  cout<<cars[i].getCarid()<<""<<cars[i].getType()<< endl;
}

//we search for the with carid
bool customer::searchcar(int) const {
 for (int i = 0; i < numcars; i++) {
  if (cars[i].getCarid()==numcars)
   return true;
 }
 return false;
}

//now we search with type instead of the carid
bool customer::searchcar(string carmodel) const {
 for (int i = 0; i < numcars; i++) {
  if (cars[i].getType()==carmodel)
   return true;
 }
 return false;
}

//NEED TO IMPLEMENT DURATION AND IDK HOW.....
//
//
//


