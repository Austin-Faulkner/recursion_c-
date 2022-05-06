#include <iostream>
#include <string>

std::string iterativeStringReverser(std::string);
std::string recursiveStringReverser(std::string);

int main() {
   std::string strng = "", reversalIt = "", reversalRecur = "";

   std::cout << "Enter a string you'd like to recursively reverse: ";
   std::cin >> strng;

   reversalIt = iterativeStringReverser(strng);
   reversalRecur = recursiveStringReverser(strng);

   std::cout << "The string " << strng << " reversed iteratively is: "
             << reversalIt << std::endl;;

   std::cout << "The string " << strng << " reversed recursively is: "
             << reversalRecur << std::endl;

   return 0;
}

std::string iterativeStringReverser(std::string s)
{
   std::string result = "";

   for (int i = s.length() - 1; i >= 0; --i)
   {
      result += s[i];
   }
   return result;
}

std::string recursiveStringReverser(std::string s)
{
   if (s.length() == 1)
      return s;
   else if (s.length() > 0)
   {
      // s.substr(postion, length)
      std::string firstChar = s.substr(0, 1);
      std::string lastChar = s.substr(s.length() - 1, 1);
      std::string middle = s.substr(1, s.length() - 2);

      return lastChar + recursiveStringReverser(middle) + firstChar;
   }
   else
      return "";
}