#include<iostream>

int main(){

    const int count = 10;
    size_t i = 0;

    do{
        std::cout << "I love C++" << std::endl;
        i++;
    } while(i < count);


    std::cout << "Loop done!" << std::endl;




    return 0;
}