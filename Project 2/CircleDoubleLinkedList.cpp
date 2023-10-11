//Samrana Sheikh
//Oct-11-2023
// CSDP 250 Project 2
//CircleDoubleLinkedList.cpp

#include "CircleDoubleLinkedList.h"
#include <iostream>
using namespace std;

CircleDoubleLinkedList::CircleDoubleLinkedList()
{
    head = nullptr;
}

CircleDoubleLinkedList::~CircleDoubleLinkedList()
{
    if (head) 
    {
        Node* current = head;
        while (current->next != head) 
        {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        delete current;  // delete the last node
    }
}

void CircleDoubleLinkedList::appendNode(int value) 
{
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;
    newNode->prev = nullptr;

    if (!head) 
    {
        head = newNode;
        head->next = head;
        head->prev = head;
    }
    else {
        Node* tail = head->prev;
        newNode->prev = tail;
        newNode->next = head;
        tail->next = newNode;
        head->prev = newNode;
    }
}

void CircleDoubleLinkedList::displayNode(Node* someNode) 
{
    if (!someNode) 
    {
        cout << "Node is null." << endl;
    }
    else {
        cout << "Data: " << someNode->data << endl;
        if (someNode->prev) 
        {
            cout << "Prev: " << someNode->prev->data << endl;
        }
        else {
            cout << "Prev: NULL" << endl;
        }
        if (someNode->next)
        {
            cout << "Next: " << someNode->next->data << endl;
        }
        else {
            cout << "Next: NULL" << endl;
        }
    }
}

void CircleDoubleLinkedList::displayList() 
{
    if (!head)
    {
        cout << "List is empty." << endl;
    }
    else {
        Node* current = head;
        do {
            cout << current->data << " ";
            current = current->next;
        } while (current != head);
        cout << "\n";
    }
}

void CircleDoubleLinkedList::displayNodes() 
{
    if (!head) 
    {
        cout << "List is empty." << endl;
    }
    else {
        Node* current = head;
        do {
            displayNode(current);
            cout << endl;
            current = current->next;
        } while (current != head);
    }
}

void CircleDoubleLinkedList::performAssignment(int num) 
{
    if (!head) 
    {
        cout << "List is empty." << endl;
        return;
    }

    switch (num) 
    {
    case 1:
        head->next->next->next= head->prev; // Move the head to the next node
        break;
    case 2:
        head->prev->prev->prev= head->next->next->next->prev; // Move the head to the previous node
        break;
    case 3:
        head->next->next->next->prev= head->prev->prev->prev; // Move the head two nodes forward
        break;
    case 4:
        head->next= head->next->next; // Move the head to the next node
        break;
    case 5:
        head->next->prev->next= head->next->next->next; // Move the head two nodes forward
        break;
    default:
        cout << "Invalid assignment." << endl;
        break;
    }
}
