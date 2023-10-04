//Samrana Sheikh
//Oct-4-2023
// CSDP 250 Project 1
//NumList.h
#ifndef NumList_H
#define NumList_H

class NumList
{
private:
    struct ListNode 
    {
        int ID;
        double GPA;
        ListNode* next;
    };

    ListNode* head;

public:
    NumList();
    ~NumList();

    void appendNode(int, double);
    void deleteNode(int);
    void insertNode(int, double);
    void displayList() const;
};

#endif