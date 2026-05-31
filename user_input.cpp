#include<iostream>

int main(){

    int age;
    std::string name;

    std::cout << "Enter your name: ";
    std::cin >> name;                       // takes input from terminal. Same as scanf.

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Hello " << name << "! You are " << age << " years old" << std::endl;



    return 0;
}