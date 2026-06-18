#include<iostream>

int main(){

  bool green_light = true;
  bool red_light = false;

  if (red_light == true){
    std::cout << "Stop!" << std::endl;
  }

  else{
    std::cout << "Go Through!" << std::endl;
  }


  if (green_light){
    std::cout << "The Light is Green!" << std::endl;
  }

  else{
    std::cout << "The Light is not Green!" << std::endl;
  }

  std::cout << "Size of (bool): " << sizeof(bool) << std::endl;


  std::cout << std::endl;
  std::cout << std::boolalpha;
  std::cout << "Red_light: " << red_light << std::endl;
  std::cout << "Green_light: " << green_light << std::endl;




  return 0;
}