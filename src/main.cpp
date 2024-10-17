#include <iostream>
#include "user.h"
#include "date.h"
using namespace std;
int main(){
    User a;
    Date d;
    d.showDate();
    d.setDate(2,4,2022);
    d.showDate();
    a.logIn();
    system("pause");
    return 0;
}