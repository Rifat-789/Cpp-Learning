#include<iostream>

int main(){

  int x = -10;
  int y{-10};
  int z(-10);

  signed int a = -100;
  unsigned int b = -100;

  std::cout << x << y << z << std::endl;

  std::cout << a << std::endl;
  std::cout << b << std::endl;


  return 0;
}