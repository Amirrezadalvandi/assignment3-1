//
// Created by dalva on 2025-03-11.
//amirreza dalvandi 40249817

#include "company.h"
company::company() {
    name = "";
    address = "";
    cars= new car*[1000];
    customers=new customer*[1000];
    numcars=0;
    numcustomers=0;
}
company::company(string name1, string address1) {
    name=name1;
    address=address1;
    cars= new car*[1000];
    customers=new customer*[1000];
    numcars=0;
    numcustomers=0;
}
company::company(const company & comp) {
    name=comp.name;
    address=comp.address;
    cars= new car*[1000];
    customers=new customer*[1000];
    numcars=0;
    numcustomers=0;
}
company::~company() {
    delete [] cars;
    delete [] customers;
}
string company::getName() {return name;}
string company::getAddress() {return address;}
void company::setName(string name1)  {name=name1;}
void company::setAddress(string address1)  {address=address1;}





void company::addclient(customer* c) {
if (numcustomers<1000) {
    if (!searchclient(c->getName())) {
        customers[numcustomers]=c;
        numcustomers++;
    }
    else{cout<<"There is already a client"<<endl;}

}
    else {cout<<"limit exceeded"<<endl;}
}






void company::removeclient(customer* c) {
    if (numcustomers > 0) {
        if (searchclient(c->getName())) {
            for (int i = 0; i < numcustomers; i++) {
                if (customers[i] == c) {
                    delete customers[i]; // Free memory if allocated dynamically
                    customers[i] = customers[numcustomers - 1]; // Move last customer here
                    customers[numcustomers - 1] = nullptr; // Nullify last position
                    numcustomers--;
                    cout << "Client removed successfully." << endl;
                    return;
                }
            }
        } else {
            cout << "Client not found." << endl;
        }
    } else {
        cout << "No clients to remove." << endl;
    }
}



void company::listclients()const {
    for (int i = 0; i < numcustomers; i++) {
        customers[i]->print();
    }
}



//now we search with type instead of the carid
bool company::searchclient(string customername) const {
    for (int i = 0; i < numcustomers; i++) {
        if (customers[i]->getName()==customername)
            return true;
    }
    return false;
}



void company::addcar( car* c) {
    if (numcars < 1000) {
        if (!searchcar(c->getCarid())) {
            cars[numcars] = c;
            numcars++;
        } else {
            cout << "Car already exists." << endl;
        }
    } else {
        cout << "Car limit exceeded." << endl;
    }
}

void company::removecar(int id) {
    if (numcars > 0) {
        if (searchcar(id)) {
            for (int i = 0; i < numcars; i++) {
                if (cars[i]->getCarid() == id) {
                    delete cars[i]; // Free memory if allocated dynamically
                    cars[i] = cars[numcars - 1]; // Move last car here
                    cars[numcars - 1] = nullptr; // Nullify last position
                    numcars--;
                    cout << "Car removed successfully." << endl;
                    return;
                }
            }
        } else {
            cout << "Car not found." << endl;
        }
    } else {
        cout << "No cars to remove." << endl;
    }
}

void company::listcars() const {
    if (numcars > 0) {
        for (int i = 0; i < numcars; i++) {
            cout << "Car ID: " << cars[i]->getCarid() << endl;
        }
    } else {
        cout << "No cars available." << endl;
    }
}

bool company::searchcar(int id) const {
    for (int i = 0; i < numcars; i++) {
        if (cars[i]->getCarid() == id) {
            return true;
        }
    }
    return false;
}
