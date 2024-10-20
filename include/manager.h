#ifndef MANAGER_H
#define MANAGER_H

#include "staff.h"
#include "user.h"

class Manager: public Staff{
    private:
        // Staff *staffList;
    public:
        Manager(string id, string n, string e, string phone, Sex s, Date b, Date cDate);
        ~Manager();
        bool addUser(string id, string n, string e, string phone, Sex s, Date b, Date cDate);
        bool deleteUser(userList &U);
        void manageMovie(); //Quản lý Phim
        void manageShowtime(); //Quản lý lịch chiếu
        void generateReport();  // Thống kê
        void manageSalary();  //Quản lý lương
        void manageFood();  //Quản lý đồ ăn
};

#endif