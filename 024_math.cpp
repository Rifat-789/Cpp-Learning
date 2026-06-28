#include<iostream>
#include<cmath>

int main(){


    // floor, ceil and round
    float weight = 7.8;

    std::cout << "Weight rounded to floor: " << std::floor(weight) << std::endl;
    std::cout << "Weight rounded to ceil: " << std::ceil(weight) << std::endl;
    std::cout << "Weight rounded by default: " << std::round(weight) << std::endl;

    std::cout << "=========================================" << std::endl;


    //abs, pow and sqre
    std::cout << "Absolute of -86: " << std::abs(-86) << std::endl;
    std::cout << "10 to the power 3: " << std::pow(10, 3) << std::endl;
    std::cout << "Square root of 9: " << std::sqrt(9) << std::endl;

    std::cout << "=========================================" << std::endl;


    //
    std::cout << "Exponential of e: " << std::exp(10) << std::endl;
    std::cout << "log; to get 54.59, for e: " << std::log(54.59) << std::endl;
    std::cout << "log; to get 10000, for 10: " << std::log10(10000) << std::endl;




    return 0;
}