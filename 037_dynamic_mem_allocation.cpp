#include<iostream>


int main(){

    int* pNum = nullptr;
    pNum = new int;                 // allocates 4 bytes of memory in heap

    *pNum = 70;

    std::cout << "Dynamically allocating memory: " << std::endl;
    std::cout << "*pNum: " << *pNum << std::endl;


    // Return memory to os and reset it
    delete pNum;
    pNum = nullptr;

    std::cout << std::endl;

    int* pNum1 = new int {40};
    std::cout << "Initalized value to a dynamic mem: " << *pNum1 << std::endl;


    delete pNum1;
    pNum1 = nullptr;


    return 0;
}