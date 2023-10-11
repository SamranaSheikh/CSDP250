//Samrana Sheikh
//Oct-11-2023
// CSDP 250 Project 2
//CircleDoubleLinkedList.h
#ifndef CircleDoubleLinkedList_H
#define CircleDoubleLinkedList_H

class CircleDoubleLinkedList 
{
private:
    struct Node 
    {
        int data;
        Node* next;
        Node* prev;
    };

    Node* head;

    void displayNode(Node* someNode);

public:
    CircleDoubleLinkedList();
    ~CircleDoubleLinkedList();

    void appendNode(int value);
    void displayList();
    void displayNodes();
    void performAssignment(int num);
};


#endif