#include <iostream>
#include "company.h"
#include "standardcar.h"
#include "luxurycar.h"
#include "customer.h"

using namespace std;

int main() {

    company comp("coencars", "concordia");


    standardcar*    stdCar1 = new standardcar(001, "toyota corolla", true);
    luxurycar*      luxCar1   = new luxurycar(002, "tesla modely", true);
    standardcar*    stdCar2 = new standardcar(003, "honda crv", true);
    luxurycar*      luxCar2 = new luxurycar(004, "genesis gv60", true);

    comp.addcar(stdCar1);
    comp.addcar(luxCar1);
    comp.addcar(stdCar2);
    comp.addcar(luxCar2);

    customer cust1("amirrez", "514708", "39 rue des chenes", 001);
    customer cust2("seif","514666", "montreal downtown", 002);

    cust1.rentcar(*stdCar1, 3);
    cust2.rentcar(*luxCar1, 5);
    cust1.rentcar(*stdCar2, 2);
    cust2.rentcar(*luxCar2, 4);

    cout <<"customer centals cfter centing cars"<<endl;
    cust1.print();
    cust2.print();

    cust2.returncar(*luxCar1);
    cust1.returncar(*stdCar1);

    cout << " Customer Rentals After Returning Car"<<endl;
    cust1.print();
    cust2.print();


    delete stdCar1;
    delete luxCar1;
    delete stdCar2;
    delete luxCar2;
    return 0;
}
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.