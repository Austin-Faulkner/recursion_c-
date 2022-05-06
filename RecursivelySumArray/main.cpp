// Austin Faulkner 20, 2020

/*
 Write a function that accepts an array of integers and a number indicating the
 number of elements as arguments. The function should recursively calculate the
 sum of all the numbers in the array. Demonstrate the function in a driver
 program.
 */

#include <iostream>

int recurArraySum(int [], int);

int main() {

   int num_elements = 0;
   int *sum = 0;

   std::cout << "This program sums an array's elements, recursively."
             << std::endl;

   std::cout << "Enter the size of the array you'd like to sum over: ";
   std::cin >> num_elements;

   auto intArray = new int[num_elements] ();

   for (int i = 1; i <= num_elements; ++i)
   {
      intArray[i] = i;
   }

   std::cout << "Sum: " << recurArraySum(intArray, num_elements);

   delete [] intArray;

   return 0;
}

int recurArraySum(int arr[], int num)
{
   if (num <= 0)
      return 0;
   else
      return recurArraySum(arr, num - 1) + arr[num];
}