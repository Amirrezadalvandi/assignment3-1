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
 duration=new int[maxrentcars];
 rentcars=new car[maxrentcars];
 numrentcars=0;
}
customer::customer(string n, string ph, string ad , int num) {
 name = n;
 phone = ph;
 address = ad;
 number = num;
 duration=new int[maxrentcars];
 rentcars=new car[maxrentcars];
 numrentcars=0;

}
customer::customer(const customer & anothercustomer) {
 name = anothercustomer.name;
 phone = anothercustomer.phone;
 address = anothercustomer.address;
 number = anothercustomer.number;
 rentcars = new car[maxrentcars];
 duration = new int[maxrentcars];
 numrentcars= anothercustomer.numrentcars;
 for(int i = 0; i < numrentcars; i++) {
  rentcars[i] = anothercustomer.rentcars[i];
  duration[i] = anothercustomer.duration[i];

 }
}
 customer::~customer() {
 delete [] duration;
 delete [] rentcars;
}


string customer::getName()const { return name; }
string customer::getPhone()const { return phone; }
string customer::getAddress()const { return address; }
int customer::getNumber()const { return number; }



//rentcar
void customer::rentcar(car &c,int weeks) {
  if (!c.getAvailability())      { cout <<"car is not available to rent"<<endl;}
  if (numrentcars >= maxrentcars) { cout <<"max rental of cars exceeded"<<endl;}

   c.setavailability(false);
   rentcars[numrentcars] = c;
   duration[numrentcars] = weeks;
   numrentcars++;
  }




//returncar
void customer::returncar(car &c) {
 /*for (int i = 0; i < numrentcars; i++)
  {
  if (rentcars[i].getCarid()==c.getCarid())
   {
   c.setavailability(true);

   for (int j = 0; j < numrentcars-1; j++)
    {
    rentcars[j] = rentcars[j+1];
    duration[j] = duration[j+1];
   }
   numrentcars--;
   return;
  }
 }
 cout<< c.getCarid()<<" is not rented by"<<name<<endl;
} */
 bool found = false;
 for (int i = 0; i < numrentcars; i++)
 {
  if (rentcars[i].getCarid()==c.getCarid())
  {
   found = true;
   c.setavailability(true);
   for (int j = i; j < numrentcars-1; j++)
   {
    rentcars[j] = rentcars[j+1];
    duration[j] = duration[j+1];
   }
   numrentcars--;
   break;
  }
 }
 if (!found) {
  cout <<"car"<<c.getCarid()<<"is not rented by:"<<name<<endl;
 }
}

//display of all the cars the person is currently renting
void customer::listallcars() const {
 cout<<"rented cars by"<< name<< "are: "<<endl;
 for (int i = 0; i < numrentcars; i++)
  cout<<"car ID: "<<rentcars[i].getCarid()<<"\n model:"<<rentcars[i].getType()<<"\n for "<<duration[i]<<" weeks."<<endl;
}

//we search for the with carid
bool customer::searchcar(int carid) const {
 for (int i = 0; i < numrentcars; i++) {
  if (rentcars[i].getCarid()==numrentcars)
   return true;
 }
 return false;
}

//now we search with type instead of the carid
bool customer::searchcar(string carmodel) const {
 for (int i = 0; i < numrentcars; i++) {
  if (rentcars[i].getType()==carmodel)
   return true;
 }
 return false;
}

void customer::print() const {
 cout << "Customer: " << name <<endl;
 cout<<"Phone: " << phone<<endl;
 cout << "Address: " << address<<endl;
 cout << "Number: " << number<<endl;
 listallcars();
}


//NEED TO IMPLEMENT DURATION AND IDK HOW.....

//
//


