#include<iostream>
#include<ios>
#include<iomanip>

int main(){

    // std::endl = prints new line
    std::cout << "Hello" << std::endl;
    std::cout << "World" << std::endl;

    std::cout << std::endl;
    // same as (\n)
    std::cout << "Hello\n";
    std::cout << "World\n";





    std::cout << std::endl;
    // std::flush = Directly puts the output in terminal without going through the buffer
    std::cout << "This is a flush msg...." << std::endl << std::flush; 





    std::cout << std::endl;
    // std::setw() = sets the width of a msg
    std::cout << "Table (default): " << std::endl;
    std::cout << std::setw(10) << "Name" << std::setw(10) << "Age" << std::endl;
    std::cout << std::setw(10) << "Rifat" << std::setw(10) << "21" << std::endl;
    std::cout << std::setw(10) << "Sifat" << std::setw(10) << "16" << std::endl;
    std::cout << std::setw(10) << "Tasin" << std::setw(10) << "18" << std::endl;





    std::cout << std::endl;
    // std::left = forces data to start showing from the left

    int width = 20;

    std::cout << "Table (Left justified): " << std::endl;
    std::cout << std::left;
    std::cout << std::setw(width) << "Name" << std::setw(width) << "Age" << std::endl;
    std::cout << std::setw(width) << "Rifat" << std::setw(width) << "21" << std::endl;
    std::cout << std::setw(width) << "Sifat" << std::setw(width) << "16" << std::endl;
    std::cout << std::setw(width) << "Tasin" << std::setw(width) << "18" << std::endl;




    std::cout << std::endl;
    // std::internal = sets signs to left 

    std::cout << "Internal Justified: " << std::endl;
    std::cout << std::right;
    std::cout << std::setw(15) << -125.45 << std::endl;
    std::cout << std::internal;
    std::cout << std::setw(15) << -125.45 << std::endl;




    std::cout << std::endl;
    // std::setfill() = fill the gaps of setw() with a specified charecter
    std::cout << "Table (Using setfill): " << std::endl;
    std::cout << std::left;
    std::cout << std::setfill('-');
    std::cout << std::setw(width) << "Name" << std::setw(width) << "Age" << std::endl;
    std::cout << std::setw(width) << "Rifat" << std::setw(width) << "21" << std::endl;
    std::cout << std::setw(width) << "Sifat" << std::setw(width) << "16" << std::endl;
    std::cout << std::setw(width) << "Tasin" << std::setw(width) << "18" << std::endl;
    

 

    return 0;
}