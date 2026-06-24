#include<iostream>

int main(){

    int a = 6;
    int b = 3;
    int c = 8;
    int d = 9;
    int e = 3;
    int f = 2;
    int g = 5;

    int result = a + b * c - d / e - f + g;                 // 6 + 24 - 3 - 2 + 5
    std::cout << "Result: " << result << std::endl; 

    // First multiplication and division. Then addition and subtraction
    // All these from left to right

    result = a / b * c  + d - e + f;
    std::cout << "Result: " << result << std::endl; 

    result = a + (b * c) - (d / e) - f + g;
    std::cout << "Result: " << result << std::endl; 

    // Make sure to use parentheses to make things clear so the reader doesn't get confused

    return 0;
}