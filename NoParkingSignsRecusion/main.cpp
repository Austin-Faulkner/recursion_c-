#include <iostream>

void sign(int);

int main() {

   int numSigns = 0;

   std::cout << "Please enter the number of \"No Parking\" signs you'd like to "
             << " post: ";
   std::cin >> numSigns;
   std::cout << "You've posted " << numSigns << " signs." << std::endl
             << "Here they are: " << std::endl << std::endl;
   sign(numSigns);

   return 0;
}

void sign(int n)
{
   std::string str = "No Parking\n";

   if (n <= 0)
   {
      std::cout << "There are no more signs to post." << std::endl;
   }
   else
   {
      std::cout << str;
      sign(n - 1);
   }
}