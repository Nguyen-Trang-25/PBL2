#ifndef USER_H
#define USER_H

#include <ctime>
#include "date.h"
using namespace std;

enum Sex{
    male,
    female,
    unisex
};

class UserNode{
    string idUser;
    string name;
    string email;
    string phoneNum;
    Sex sex;
    Date birth;
    Date createDate;
    UserNode *next;
};

class User{
    protected:
        UserNode *head;
    public:
        void logIn();
        void logOut();
        void displayInfo();
        void updateUser(); 
        void updateStatus();
};
#endif

