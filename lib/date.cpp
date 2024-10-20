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

void Date::setTime(int h, int mn, int s) {
    this->hour = h;
    this->minute = mn;
    this->second = s;
}

void Date::setDayTime(int d, int m, int y, int h, int mn, int s) {
    setDate(d, m, y); 
    setTime(h, mn, s); 
}

void Date::showDate(){
    cout<< this->day << " - " << this->month << " - " << this ->year; 
}

void Date::showTime(){
    cout << " " << this->hour << ":" << this->minute << ":" << this->second;
}

void Date::showDateTime(){
    showDate();
    showTime();
    cout << endl;
}