#include<iostream>


const int pen = 10;
    const int marker = 20;
    const int eraser = 30;
    const int rectrangle = 40;
    const int circle = 50;
    const int ellips = 60;

    int main(){

        int tool = pen;

        switch (tool)
        {
        case pen:
            std::cout << "Active tool is pen" << std::endl;

            break;

        case marker:
            std::cout << "Active tool is marker" << std::endl;
            
            break;

        case eraser:
            std::cout << "Active tool is eraser" << std::endl;
            
            break;

        case rectrangle:
            std::cout << "Active tool is rectangle" << std::endl;
            
            break;

        case circle:
            std::cout << "Active tool is circle" << std::endl;
            
            break;

        case ellips:
            std::cout << "Active tool is ellips" << std::endl;
            
            break;
        
        default:
            std::cout << "Can't match any tool!" << std::endl;

            break;
        }


        return 0;
    }