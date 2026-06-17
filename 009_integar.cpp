#include<iostream>

int main(){

  int elephent;           // garbage value assigned
  int lion {};            // initialization to zero

  int dog {10};
  int cat {15};

  int domesticated {dog + cat};

  std::cout << "Domesticated Animals: " << domesticated << std::endl;

  int buttelfly = 5;
  int roach = 12;

  int insects = buttelfly + roach;

  std::cout << "Insects: " << insects << std::endl;



  return 0;
}