#include<iostream>

int main(){

    int* pNum = nullptr;               // good to initialize with nullptr.
    double* pFrac = nullptr;

    int* pNum1 = nullptr;
    double* pFrac1 = nullptr;


    std::cout << "Size of int: " << sizeof(int) << std::endl;
    std::cout << "Size of double: " << sizeof(double) << std::endl;
    std::cout << "Size of *int: " << sizeof(int*) << std::endl;
    std::cout << "Size of *double: " << sizeof(double*) << std::endl;
    std::cout << "Size of pNum1: " << sizeof(pNum1) << std::endl;
    std::cout << "Size of pFrac1: " << sizeof(pFrac1) << std::endl;


    std::cout << "===================================" << std::endl;

    int var = 43;
    int* pVar = &var;

    std::cout << "The variable value: " << var << std::endl;
    std::cout << "The variable pointer: " << pVar << std::endl;                 // This prints the address of var variable


    int var1 = 65;
    pVar = &var1;                   // This changes the address stored in the pointer variable 

    std::cout << "The variable pointer: " << pVar << std::endl;
    // Remember not to cross assign different type while using pointers.



    std::cout << "===================================" << std::endl;
    
    // Dereference = Read the value stored in the address in the pointer

    int value = 50;
    int* pValue = &value;

    std::cout << "Value: " << *pValue << std::endl;



    return 0;
}