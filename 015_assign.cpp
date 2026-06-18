#include<iostream>

int main(){

    int x = 40;

    std::cout << "x = " << x << std::endl;

    x = 50;                 // You can change the initial value later on.

    std::cout << "Reassigned x = " << x << std::endl;

    // Be aware of auto type

    return 0;
}