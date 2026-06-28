#include<iostream>

int main(){

    int x = 10;
    int y = 15;

    int result = (y > x) ? y : x;

    std::cout << "The bigger number is : " << result << std::endl;

    std::cout << "================================" << std::endl;


    bool fast = true;

    int speed = (fast) ? 300 : 150;

    std::cout << "The speed is: " << speed << std::endl;



    return 0;
}