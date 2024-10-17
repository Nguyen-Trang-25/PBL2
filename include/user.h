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
    private:
        string idUser;
        string name;
        string email;
        string phoneNum;
        Sex sex;
        Date birth;
        Date createDate;
        UserNode *next;
    public:
         UserNode(string id, string n, string e, string phone, Sex s, Date b, Date cDate);
};

class User{
    protected:
        UserNode *head;
    public:
        User();
        void logIn();
        void logOut();
        void displayInfo();
        void updateUser(); 
        void updateStatus();
};
#endif

