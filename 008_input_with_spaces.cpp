#include<iostream>
#include<string>

int main(){

    int age;
    std::string fullName;

    std::cout << "Enter your full name: ";
    std::getline(std::cin, fullName);

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Hello " << fullName << "! You are " << age << " years old" << std::endl;


    return 0;
}