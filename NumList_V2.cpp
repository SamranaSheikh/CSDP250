//Samrana Sheikh
//Oct-4-2023
// CSDP 250 Project 1
// NumList_V2.cpp
#include "NumList.h"
#include <iostream>
using namespace std;

int main()
{
    NumList list;

    list.appendNode(22, 3.5);
    list.appendNode(55, 3.7);
    list.appendNode(88, 3.1);
    list.appendNode(111, 3.8);
    list.appendNode(210, 3.3);

    list.displayList();

    list.insertNode(31, 3.4);
    list.insertNode(1, 2.9);

    list.displayList();

    list.deleteNode(111);
    list.deleteNode(22);

    list.displayList();

    return 0;
}