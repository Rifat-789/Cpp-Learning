#include<iostream>

int main(){

    int scores[] = {1,2,3,4,5,6,7,8,9,10,15};

    int count = std::size(scores);

    for (size_t i = 0; i < count; i++) {
        std::cout << "The score is: " << scores[i] << std::endl;
    }



    // Better option, use ranged base for loops:

    for (auto i : scores) {
        std::cout << "Value: " << i << std::endl;
    }


    return 0;
}