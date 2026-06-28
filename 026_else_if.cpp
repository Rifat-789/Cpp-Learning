#include<iostream>


const int pen = 10;
    const int marker = 20;
    const int eraser = 30;
    const int rectrangle = 40;
    const int circle = 50;
    const int ellips = 60;


int main(){

    int tool = ellips;

    if(tool == pen){
        std::cout << "The active tool is pen" << std::endl;
    }
    else if(tool == eraser){
        std::cout << "The active tool is eraser" << std::endl;
    }
    else if(tool == rectrangle){
        std::cout << "The active tool is rectangle" << std::endl;
    }
    else if(tool == circle){
        std::cout << "The active tool is circle" << std::endl;
    }
    else if(tool == ellips){
        std::cout << "The active tool is ellips" << std::endl;
    }


    std::cout << "Moving on" << std::endl;


    return 0;
}