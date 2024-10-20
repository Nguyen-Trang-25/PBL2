#include "working_assignment.h"
#include "date.h"


workingAssignmentNode::workingAssignmentNode(string id, Date date, string task, Date startTime, Date endTime, workingStatus status, Date createTime)
    : id(id), date(date), task(task), startTime(startTime), endTime(endTime), status(status), createDate(createTime), next(nullptr) {}

workingAssignmentNode::workingAssignmentNode(const workingAssignmentNode& A)
    : id(A.id), date(A.date), task(A.task),
      startTime(A.startTime), endTime(A.endTime),
      status(A.status), createDate(A.createDate), next(nullptr) {}
      
workingAssignmentNode::~workingAssignmentNode(){

}

workingAssignmentList::workingAssignmentList() : head(nullptr){
}

workingAssignmentList::workingAssignmentList(const workingAssignmentList& L){
    if (L.head == nullptr) return; 

    head = new workingAssignmentNode(*L.head); 
    workingAssignmentNode* currSrc = L.head->next; 
    workingAssignmentNode* currDest = head; 

    while (currSrc != nullptr) {
        currDest->next = new workingAssignmentNode(*currSrc); 
        currSrc = currSrc->next;
        currDest = currDest->next;
    }
}

workingAssignmentList::~workingAssignmentList() {
    while (head != nullptr) {
        workingAssignmentNode* temp = head;
        head = head->next;
        delete temp; 
    }
}




