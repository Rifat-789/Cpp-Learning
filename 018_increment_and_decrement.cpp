#include<iostream>

int main(){

    int value = 5;

    // increment by 1
    value = value + 1;
    std::cout << "The value is: " << value << std::endl;

    value = 5;

    // decrement by 1
    value = value - 1;
    std::cout << "The value is: " << value << std::endl;


    std::cout << std::endl;

    // Postfix increment
    std::cout << "Postfix increment:" << std::endl;

    value = 5;

    std::cout << "The value is (increasing): " << value++ << std::endl;       // 5
    std::cout << "The value is: " << value << std::endl;            // 6


    std::cout << std::endl;

    // Postfix decrement 
    std::cout << "Postfix decrement:" << std::endl;
    
    value = 5;

    std::cout << "The value is (decreasing): " << value-- << std::endl;     // 5
    std::cout << "The value is: " << value << std::endl;            // 4


    std::cout << std::endl;

    // Prefix increment
    std::cout << "Prefix increment:" << std::endl;

    value = 5;

    ++value;
    std::cout << "The value is: " << value << std::endl;

    value = 5;
    std::cout << "The value is (prefixed): " << ++value << std::endl;


    std::cout << std::endl;

    // Prefix decrement
    std::cout << "Prefix decrement:" << std::endl;

    value = 5;

    --value;
    std::cout << "The value is: " << value << std::endl;

    value = 5;
    std::cout << "The value is (prefixed): " << --value << std::endl;


    return 0;
}