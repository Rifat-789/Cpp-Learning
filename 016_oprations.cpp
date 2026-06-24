#include<iostream>

int main(){

    int num1 = 2;
    int num2 = 7;

    // Addition
    int result = num1 + num2;

    std::cout << "Resul: " << result << std::endl;


    // Substraction
    result = num2 - num1;
    std::cout << "Resul: " << result << std::endl;

    result = num1 - num2;
    std::cout << "Resul: " << result << std::endl;


    // Multiplication
    result = num1 * num2;
    std::cout << "Resul: " << result << std::endl;

    // Division
    result = num2 / num1;
    std::cout << "Resul: " << result << std::endl;

    // Modulus 
    result = num2 % num1;
    std::cout << "Resul: " << result << std::endl;

    result = 31 % 10;
    std::cout << "Resul: " << result << std::endl;

    return 0;
}