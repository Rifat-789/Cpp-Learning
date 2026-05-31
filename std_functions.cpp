#include<iostream>

int main(){

    std::cout << "Hello World!" << std::endl;
    std::cout << "The number is: " << 28 << std::endl;

    int age = 22;

    std::cout << "My age is: " << age << std::endl;

    //Error
    std::cerr << "std::cerr output: Something went wrong!" << std::endl;

    //log msg
    std::clog << "std::clog output: This is a log msg" << std::endl;


    return 0;
}