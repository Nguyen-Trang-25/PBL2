#ifndef STAFF_H
#define STAFF_H
#include "user.h"
#include "working_assignment.h"

class Staff: public userList{
    private:
        double salary;
        workingAssignmentList task;
    public:
        void checkWorkingAssignment();
        bool bookTicket();
};

#endif 
