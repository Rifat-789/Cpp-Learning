#include<iostream>

int main(){

    const char *msg = "Hello World!";
    // char pointers should be const because the array is treated as const char

    std::cout << "Message: " << msg << std::endl;
    std::cout << "Dereferenced: " << *msg << std::endl;


    return 0;
}