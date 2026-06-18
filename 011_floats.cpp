#include<iostream>
#include<iomanip>

int main(){

  float num1 = 1.2938445093478f;            // Precision : 7
  double num2 = 1.02832027423904;           // Precision : Around 15
  long double num3 = 1.88302393023029390L;  // Precision : Above 15

  std::cout << "Size of float: " << sizeof(num1) << std::endl;
  std::cout << "Size of double: " << sizeof(num2) << std::endl;
  std::cout << "Size of long double: " << sizeof(num3) << std::endl;


  // Precision
  std::cout << std::setprecision(20); // Control the precision from std::cout
  std::cout << "Number1 is: " << num1 << std::endl;
  std::cout << "Number2 is: " << num2 << std::endl;
  std::cout << "Number3 is: " << num3 << std::endl;



  // Scientific notations
  double num4 = 1927382;
  double num5 = 1.9232121e8;            // e8 means 10 to the power of 8
  double num6 = 1.923e8;

  double num7 = 0.00000000003278;
  double num8 = 3.278e-11;

  std::cout << "-----------------------------------" << std::endl;

  std::cout << "Number4 is: " << num4 << std::endl;
  std::cout << "Number5 is: " << num5 << std::endl;
  std::cout << "Number6 is: " << num6 << std::endl;
  std::cout << "Number7 is: " << num7 << std::endl;
  std::cout << "Number8 is: " << num8 << std::endl;



  //Infinity and NaN
  double num9 = 5.6;
  double num10 = 0;
  double num11 = 0;

  double result = num9 / num10;

  std::cout << "-----------------------------------" << std::endl;  
  std::cout << num9 << "/" << num10 << " yeilds: " << result << std::endl;
  std::cout << result << "+" << num9 << " yeilds: " << result + num9 << std::endl;

  result = num10 / num11;
  std::cout << num10 << "/" << num11 << " yeilds: " << result << std::endl;


  return 0;
}