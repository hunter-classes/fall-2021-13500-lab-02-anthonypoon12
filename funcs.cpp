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
void print_interval(int L, int U)
{
  for(int i=L;i<U;i++)
  {
    std::cout<<i<<" ";
  }
  std::cout<<"\n";
}
