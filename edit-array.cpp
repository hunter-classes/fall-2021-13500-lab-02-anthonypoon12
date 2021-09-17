/*
Author: Anthony Poon
Course: CSCI-135
Instructor: Tong Yi, Mike Zamansky
Assignment: Lab 2C
WWrite a program edit-array.cpp that creates an array of 10 integers, and provides the user with an interface to edit any of its elements. Specifically, it should work as follows:

Create an array myData of 10 integers.
Fill all its cells with value 1 (using a for loop).
Print all elements of the array on the screen.
Ask the user to input the cell index i, and its new value v.
If the index i is within the array range (0 ≤ i < 10), update the asked cell, myData[i] = v, and go back to the step 3. Otherwise, if index i is out of range, the program exits.
*/
#include <iostream>

int main()
{
  int i=0;
  int v=1;
  int myData[10];
  for (int x = 0; x<10; x++)
  myData[x]=1;
  do{
    myData[i]=v;
    for (int x = 0; x<10; x++)
      std::cout<<myData[x]<<" ";
    std::cout<<"\n";
  std::cout<<"Input index: ";
  std::cin>>i;
  std::cout<<"\nInput value: ";
  std::cin>>v;
  std::cout<<"\n";
}
  while((0<=i)&&(i<10));
  std::cout<<"Index out of range. Exit.\n";
  return 0;
}
