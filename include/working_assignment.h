#ifndef WORKING_ASSIGNMENT_H
#define WORKING_ASSIGNMENT_H
#include <string>
#include "date.h"
using namespace std;

enum class workingStatus {
    Pending,   // Chờ xử lý
    InProgress,// Đang tiến hành
    Completed, // Hoàn thành
    Canceled   // Bị hủy
};

class workingAssignmentNode{
    private:
        string id;
        Date date;
        string task;
        Date startTime;
        Date endTime;
        workingStatus status;
        Date createDate;
        workingAssignmentNode* next;
    public:
        workingAssignmentNode(string id, Date date, string task, Date startTime, Date endTime, workingStatus status, Date createTime);
        workingAssignmentNode(const workingAssignmentNode& A);
        ~workingAssignmentNode();
        friend class workingAssignmentList;
};

class workingAssignmentList{
    private:
        workingAssignmentNode *head;
    public:
        workingAssignmentList();
        workingAssignmentList(const workingAssignmentList& L);
        ~workingAssignmentList();
        void showAssignment();
        void showAllAssignment();
        bool addAssignment(workingAssignmentNode A);
        bool updateAssignment(workingAssignmentNode &A);
        bool deleteAssignment(workingAssignmentList , workingAssignmentNode &A);
};



#endif