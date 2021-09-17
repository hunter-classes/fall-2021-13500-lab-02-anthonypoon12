/*
Author: Anthony Poon
Course: CSCI-135
Instructor: Tong Yi, Mike Zamansky
Assignment: Lab 2B
Write a program print-interval.cpp that asks the user to input two integers L and U
(representing the lower and upper limits of the interval), and print out all integers in the range L ≤ i < U
separated by spaces. Notice that we include the lower limit, but exclude the upper limit.
*/
#include <iostream>
#include "funcs.h"
int main()
{
  int low;
  int high;
  std::cout<<"L = -5\n";
  low = -5;
  std::cout<<"U = 10\n";
  high = 10;
  std::cout<<"\n\n\n";
  print_interval(low,high);
  std::cout<<"L = 0\n";
  low = 0;
  std::cout<<"U = 20\n";
  high = 20;
  std::cout<<"\n\n\n";
  print_interval(low,high);
  std::cout<<"L = 10\n";
  low = 10;
  std::cout<<"U = 11\n";
  high = 11;
  std::cout<<"\n\n\n";
  print_interval(low,high);
  std::cout<<"L = 100\n";
  low = 100;
  std::cout<<"U = 130\n";
  high = 130;
  std::cout<<"\n\n\n";
  print_interval(low,high);
  std::cout<<"L = -100\n";
  low = -100;
  std::cout<<"U = -10\n";
  high = -10;
  std::cout<<"\n\n\n";
  print_interval(low,high);
  return 0;
}
