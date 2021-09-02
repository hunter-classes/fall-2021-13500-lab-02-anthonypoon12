/*
Author: Anthony Poon
Course: CSCI-135
Instructor: Tong Yi, Mike Zamansky
Assignment: Lab 2A

Write a program valid.cpp, which asks the user to input an integer in the range 0 < n < 100. If the number is out of range, the program should keep asking to re-enter until a valid number is input.

After a valid value is obtained, print this number n squared.
*/
#include <iostream>
int main()
{
  int x;
  std::cout<<"Please enter an integer: ";
  std::cin>>x;
  std::cout<<"\n";
  while((x<=0)||(x>=100))
  {
    std::cout<<"Please re-enter: ";
    std::cin>>x;
    std::cout<<"\n";
  }
  std::cout<<"Number squared is " << (x*x)<<std::endl;
  return 0;
}
