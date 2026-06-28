#include<iostream>

int main(){

    for(int i = 0; i < 10; i++){
        std::cout << i << ". I love C++" << std::endl;
    }

    std::cout << "Loop done" << std::endl;

    std::cout << "==========================" << std::endl;

    // better practice
    for(size_t i = 0; i < 10; i++){
        std::cout << "Same thing with size_t type" << std::endl;
    }

    // You shouldn't hardcode values


    std::cout << "=============================" << std::endl;

    size_t count = 10;

    for(size_t i = 0; i < count; i++){
        std::cout << "Don't hardcode values" << std::endl;
    }

    return 0;
}