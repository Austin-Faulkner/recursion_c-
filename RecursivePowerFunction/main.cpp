// Austin Faulkner: March 25, 2020

/*
   Write a function that uses recursion to raise a number to a power. The function
   should accept two arguments: the number to be raised and the exponent. Assume
   that the exponent is a nonnegative number. Demonstrate the function in a program.
 */

#include <iostream>

int powerFunction(int, int);

int main() {

   int base = 0, exponent = 0, result = 0;

   std::cout << "Enter a nonnegative base and exponent: ";
   std::cin >> base >> exponent;

   result = powerFunction(base, exponent);

   std::cout << "The integer value of a number set to the base " << base << " and "
             << "the exponent " << exponent << " is: " << result << std::endl;

   return 0;
}

int powerFunction(int a, int x)
{
   return x == 1 ? a : (a * powerFunction(a, x - 1));
}