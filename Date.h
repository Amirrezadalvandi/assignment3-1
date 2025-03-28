//
// Created by dalva on 2025-02-16.
//

#ifndef DATE_H
#define DATE_H
#include "time.h"


class Date {
public:
    Date();
    Date(int, int, int, int, int, int);   // sets day, month, year, hours, minutes, seconds
    void printDate() const;   	    // print date to the screen

private:
    int day, month, year;
    Time time;   // a component object

};



#endif //DATE_H
