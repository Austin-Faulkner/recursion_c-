// Austin Faulkner: March 20, 2020

#include <iostream>
#include <fstream>

int recurMultiply(int, int);

int main() {

   auto num1 = 0, num2 = 0, product = 0;

   std::ifstream fin("integer_input.txt", std::ios::in);
   std::ofstream fout("products.txt", std::ios::out);

   std::cout << "Reading \"integer_input.txt\": " << std::endl;

   while (fin >> num1 >> num2)
   {
      product = recurMultiply(num1, num2);
      fout << product << " ";
   }
   fout << std::endl;

   std::cout << "Printing products to \"products.txt\"" << std::endl;

   return 0;
}

int recurMultiply(int x, int y)
{
   if (x == 0 || y == 0)
      return 0;
   else if (x == 1)
      return y;
   else if (y == 1)
      return x;
   else
      return recurMultiply(x,y - 1) + x;
}