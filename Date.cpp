//
// Created by dalva on 2025-02-16.
//

#include "date.h"
# include <iostream>
using namespace std;

Date::Date(int d, int m, int y, int hour, int min, int sec) {
    day = d;
    month = m;
    year = y ;
    time.setTime(hour, min, sec);
}
Date::Date() {
    day = 0;
    month = 0;
    year = 0;
    time.setTime(0, 0, 0);
}


void Date::printDate() const {
    cout << month << "/" << day << "/" << year << " ";
    time.printTime() ;
}
