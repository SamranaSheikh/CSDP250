//Samrana Sheikh
//Oct-25-2023
//CSDP 250 Project 3
//Binary_Converter_V2.cpp

#include "Binary_Converter.h"
#include <iostream>
using namespace std;


int main() 
{
    double decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    Binary_Converter converter(decimalNumber);
    converter.convertToBinary();

    return 0;
}
