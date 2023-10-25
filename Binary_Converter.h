//Samrana Sheikh
//Oct-25-2023
//CSDP 250 Project 3
//Binary_Converter.h

#ifndef Binary_Converter_H
#define Binary_Converter_H

class Binary_Converter 
{
private:
    double decimalNumber;
    int integerPart;
    double decimalPart;

public:
    Binary_Converter(double num);
    void convertToBinary();
    void printBinaryResult();
};

#endif
