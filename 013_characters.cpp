#include<iostream>


int main(){

    char character1 = 'A';
    char character2 = 'r';
    char character3 = 'r';
    char character4 = 'o';
    char character5 = 'w';

    std::cout << character1 << std::endl;
    std::cout << character2 << std::endl;
    std::cout << character3 << std::endl;
    std::cout << character4 << std::endl;
    std::cout << character5 << std::endl;

    std::cout << std::endl;

    char value = 65;                // ASCII cahracter code for A
    std::cout << "Value: " << value << std::endl;
    std::cout << "Value(int): " << static_cast<int>(value) << std::endl;



    return 0;
}