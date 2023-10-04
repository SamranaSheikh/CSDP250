//Samrana Sheikh
//Oct-4-2023
// CSDP 250 Project 1
//NumList.cpp

#include "NumList.h"
#include <iostream>
using namespace std;

NumList::NumList() 
{
    head = nullptr;
}

NumList::~NumList() 
{
    ListNode* nodePtr;
    while (head)
    {
        nodePtr = head;
        head = head->next;
        delete nodePtr;
    }
}

void NumList::appendNode(int ID, double GPA) 
{
    ListNode* newNode = new ListNode;
    newNode->ID = ID;
    newNode->GPA = GPA;
    newNode->next = nullptr;

    if (!head) 
    {
        head = newNode;
    }
    else {
        ListNode* nodePtr = head;
        while (nodePtr->next)
        {
            nodePtr = nodePtr->next;
        }
        nodePtr->next = newNode;
    }
}

void NumList::displayList() const 
{
    ListNode* nodePtr = head;
    while (nodePtr) {
        cout << nodePtr->ID << ", " << nodePtr->GPA << endl;
        nodePtr = nodePtr->next;
    }
}

void NumList::insertNode(int ID, double GPA) 
{
    ListNode* newNode = new ListNode;
    newNode->ID = ID;
    newNode->GPA = GPA;
    newNode->next = nullptr;

    if (!head) 
    {
        head = newNode;
    }
    else {
        ListNode* nodePtr = head;
        ListNode* prevNode = nullptr;

        while (nodePtr && nodePtr->ID < ID)
        {
            prevNode = nodePtr;
            nodePtr = nodePtr->next;
        }

        if (!prevNode) 
        {
            newNode->next = head;
            head = newNode;
        }
        else {
            prevNode->next = newNode;
            newNode->next = nodePtr;
        }
    }
}

void NumList::deleteNode(int ID) 
{
    if (!head) return;

    if (head->ID == ID)
    {
        ListNode* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    ListNode* nodePtr = head;
    ListNode* prevNode = nullptr;

    while (nodePtr && nodePtr->ID != ID) 
    {
        prevNode = nodePtr;
        nodePtr = nodePtr->next;
    }

    if (nodePtr) 
    {
        prevNode->next = nodePtr->next;
        delete nodePtr;
    }
}