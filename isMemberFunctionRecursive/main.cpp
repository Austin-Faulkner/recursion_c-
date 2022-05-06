// Austin Faulkner: March 25, 2020

/*
   Write a recursive Boolean function named isMember. The function should accept
   two arguments: an array and a value. The function should return true if the
   value is found in the array, or false if the value is not found in the array.
   Demonstrate the function in a driver program.
 */

#include <iostream>

bool isMember(int [], int value);

int main() {

   const int SIZE = 12;
   int target = 0;
   bool yesNo = false;
   int intArray[SIZE] = {-11, -9, -7, -5, -3, -1, 1, 3, 5, 7, 9, 11};

   std::cout << "Enter an integer to test whether or not it is in the integer "
             << "array: ";
   std::cin >> target;

   yesNo = isMember(intArray, target);

   std::cout << "Is " << target << " in the intArray? " << yesNo;
   return 0;
}

bool isMember(int arr[], int value)
{
   for (int i = 0; i < 12; ++i)
   {
     if (arr[i] == value)
        return true;
   }
   return false;
}