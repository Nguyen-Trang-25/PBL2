#include <iostream>
#include "date.h"
using namespace std;

Date::Date(int d, int m, int y, int h, int mn, int s){
    day = d;
    month = m;
    year = y;
    hour = h;
    minute = mn;
    second = s;
}
Date::Date(){
    day = 1;
    month = 1;
    year = 2024;
    hour = 0;
    minute = 0;
    second = 0;
}
void Date::setDate(int d, int m, int y){
    this->day = d;
    this->month = m;
    this->year = y;
}
void Date::showDate(){
    cout<< this->day << " - " << this->month << " - " << this ->year << endl; 
}