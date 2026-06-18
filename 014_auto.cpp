#include<iostream>


int main(){

    auto var1 = 5;
    auto var2 = 3.5;
    auto var3 = 1.9f;
    auto var4 = 'A';

    std::cout << "Size of var1: " << sizeof(var1) << " bytes" << std::endl;
    std::cout << "Size of var2: " << sizeof(var2) << " bytes" << std::endl;
    std::cout << "Size of var3: " << sizeof(var3) << " bytes" << std::endl;
    std::cout << "Size of var4: " << sizeof(var4) << " bytes" << std::endl;

    // auto type is not dynamic

    return 0;
}