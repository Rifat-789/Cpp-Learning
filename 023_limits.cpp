#include<iostream>
#include<limits>


int main(){

    std::cout << "The range for int is " << std::numeric_limits<int>::min() << " to " << std::numeric_limits<int>::max() << std::endl;

    std::cout << "The range for float is " << std::numeric_limits<float>::min() << " to " << std::numeric_limits<float>::max() << std::endl;

    std::cout << "The range for long is " << std::numeric_limits<long>::min() << " to " << std::numeric_limits<long>::max() << std::endl;

    std::cout << "The range for long double is " << std::numeric_limits<long double>::min() << " to " << std::numeric_limits<long double>::max() << std::endl;



    // This way you can find the range of any data type if needed

    // Other important uses

    std::cout << "===============================================" << std::endl;

    std::cout << "int is signed: " << std::numeric_limits<int>::is_signed << std::endl;
    std::cout << "int digits: " << std::numeric_limits<int>::digits << std::endl;

    return 0;
}