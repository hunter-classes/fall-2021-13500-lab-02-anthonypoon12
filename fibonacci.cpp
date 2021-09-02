/*
Author: Anthony Poon
Course: CSCI-135
Instructor: Tong Yi, Mike Zamansky
Assignment: Lab 2D
Write a program fibonacci.cpp, which uses an array of ints to compute and print all Fibonacci numbers from F(0) to F(59).
*/
#include <iostream>

int main()
{
  int fib[60];
  fib[0]=0;
  fib[1]=1;
  for (int i = 2; i<60;i++)
    fib[i]=fib[i-1]+fib[i-2];
  for (int x = 0; x<60; x++)
  {
    //std::cout<<x<<". ";
    std::cout<<fib[x]<<std::endl;
  }
  return 0;
}//The numbers begin to diverge from what they should be because integers can only contain 4 bits.
//Their range is from  -2147483648 to 2147483647 and the numbers starting from the 47th number are beyond this range.
