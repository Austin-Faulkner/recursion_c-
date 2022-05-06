// Austin Faulkner: March 25, 2020

/*
   Write a function that  accepts an integer argument and returns the sum of all
   the integers from 1 up to the number passed as an argument. For example, if
   50 is passed as an argument, the function will return the sum of 1, 2, ..., 50.
   Use recursion to calculate the sum. Demonstrate the function in a program.
 */

#include <iostream>

int sumOfNums(int);

int main() {

   int integer = 0, sumResult = 0;

   std::cout << "Enter a nonnegative integer you'd like to sum from "
             << "1, 2, . . ., n: ";
   std::cin >> integer;

   sumResult = sumOfNums(integer);

   std::cout << "The sum of the integers from 1 to " << integer << " is: "
             << sumResult << std:: endl;

   return 0;
}

int sumOfNums(int num)
{
   if (num <= 0)
      return 0;
   else
      return sumOfNums(num - 1) + num;
}