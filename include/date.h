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
        void setDate( int d, int m, int y);
        void setTime(int h, int mn, int s);
        void setDayTime(int d, int m, int y, int h, int mn, int s);
        void showDate();
        void showTime();
        void showDateTime();
};

#endif