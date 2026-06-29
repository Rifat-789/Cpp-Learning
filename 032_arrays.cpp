#include<iostream>


int main(){

    int scores[10];

    /*
    scores[0] = 10;
    scores[1] = 20;
    scores[2] = 30;
    */

    for(size_t i = 0; i < 10; i++){
        scores[i] = i * 10;
    }

    for(size_t i = 0; i < 10; i++){
        std::cout << "scores[" << i << "]: " << scores[i] << std::endl;
    }



    std::cout << "=================================" << std::endl;
    std::cout << "Pre initialize the array" << std::endl;

    int salaries[5] = {12, 45, 34, 80};

    for (size_t i = 0; i < 5; i++){
        std::cout << "salaries[" << i << "]: " << salaries[i] << std::endl;
    }




    std::cout << std::endl;
    std::cout << "=============================" << std::endl;
    // Ranged base for loop

    int value[] = {10,20,30,40,50,60,70};
    int sum = 0;

    for(int element : value){               // This way the loop will run from 0 to the size of value
        sum += element;
    }

    std::cout << "Value sum: " << sum << std::endl;
    

    return 0;
}