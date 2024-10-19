#ifndef DATE_H
#define DATE_H
#include <iostream>
using namespace std;

class Date{
    private:
        int day;
        int month;
        int year;
        int hour;
        int minute;
        int second;
    public:
        Date();
        Date(int, int, int, int = 0, int = 0, int = 0);
        void setDate( int, int, int);
        void showDate();
};

#endif