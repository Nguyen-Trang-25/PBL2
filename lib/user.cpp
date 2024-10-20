#include <iostream>
#include "user.h"

userList::userList(): head(nullptr) {}

userList::userList(const userList &user): head(nullptr){
    if(user.head == nullptr) return;
    this->head = new UserNode(user.head->idUser, user.head->name, user.head->email, user.head->phoneNum, user.head->sex, user.head->birth, user.head->createDate);
    UserNode *currSrc = user.head->next;
    UserNode *currDest = this->head;
    while( currSrc != nullptr){
        currDest->next = new UserNode(currSrc->idUser, currSrc->name, currSrc->email, currSrc->phoneNum, currSrc->sex, currSrc->birth, currSrc->createDate);
        currSrc = currSrc->next;
        currDest = currDest->next;
    }
}
userList::~userList(){
    cout<<"1__";
    if(head == nullptr) return;
    UserNode *current = head;
    while(current != nullptr){
        UserNode *tmp = current;
        current = current->next;
        delete tmp;
    }
}