#include<iostream>

int addNum(int num1, int num2){
    int sum = num1 + num2;
    return sum;
}

int main(){

    int firstNum = 7;
    int secondNum = 13;

    int sum = addNum(firstNum, secondNum);

    std::cout << "The sum of two numbers is: " << sum << std::endl;
    std::cout << "The sum of two numbers is: " << addNum(27, 3) << std::endl;


    return 0;
}