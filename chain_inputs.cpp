#include<iostream>

int main(){

    int age;
    std::string name;

    std::cout << "Please enter your last name and age spearated by space: ";
    std::cin >> name >> age;
    // Takes multiple inputs separated by space and stores them in different containers

    std::cout << "Hello " << name << "! You are " << age << " years old" << std::endl;



    return 0;
}