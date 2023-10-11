//Samrana Sheikh
//Oct-11-2023
//CSDP 250 Project 2
//CircleDoubleLinkedList_V2.cpp

#include "CircleDoubleLinkedList.h"
#include <iostream>
using namespace std;

int main() 
{
    CircleDoubleLinkedList list;

    // Add the nodes
    for (int num = 1; num <= 5; num++) 
    {
        list.appendNode(num * 11);
    }

    // Print the list
    cout << "Initial list: "<< endl;
    cout << "--------------------------------------------------------------------- " << endl;
    list.displayList();
    cout << endl;
   
    

    // Print the nodes
    cout << "Initial nodes: " << endl;
    cout << "--------------------------------------------------------------------- " << endl;
    list.displayNodes();

    cout << "After assignment: " << endl;
    cout << "--------------------------------------------------------------------- " << endl;
    // Perform the assignment
    for (int num = 1; num <= 5; num++) 
    {
        list.performAssignment(num);

        // Display assignment changes
       
        cout << "After assignment" << num <<": "<< endl;
        list.displayList();
        cout << endl;
    }

    // Printign the final nodes
    cout << "Ending nodes: " << endl;
    cout << "--------------------------------------------------------------------- " << endl;
    list.displayNodes();
    cout << "--------------------------------------------------------------------- " << endl;

    return 0;
}
