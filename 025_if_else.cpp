#include<iostream>


int main (){

    int num1 = 55;
    int num2 = 60;

    bool result = (num1 < num2);

    if(result == true){
        std::cout << num1 << " is smaller than " << num2 << std::endl;
    }
    else{
        std::cout << num1 << " is NOT smaller than " << num2 << std::endl;
    }

    std::cout << std::endl;

    if(num1 < num2){
        std::cout << num1 << " is smaller than " << num2 << std::endl;
    }
    else{
        std::cout << num1 << " is NOT smaller than " << num2 << std::endl;
    }



    // nested if
    std::cout << "===================================" << std::endl;

    bool green = true;
    bool police_stope = false;

    std::cout << "Police officer stops/not: " << std::endl;

    if(green == true){
        if(police_stope != true){
            std::cout << "NO" << std::endl;
            std::cout << "Go" << std::endl;
        }
        else{
            std::cout << "Yes" << std::endl;
            std::cout << "Stop" << std::endl;
        }
    }

    std::cout << "===================================" << std::endl;
    std::cout << "Multi statements in one condition: " << std::endl;

    police_stope = true;

    if(green && !police_stope){
        std::cout << "Go" << std::endl;
    }
    else{
        std::cout << "Stop" << std::endl;
    }



    return 0;
}