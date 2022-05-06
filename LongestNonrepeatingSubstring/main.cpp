#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;

int lengthOfLongestSubstring(string);

int main(int argc, char** argv) {

   string str = "Balls";
   int result = 0;

   result = lengthOfLongestSubstring(str);

   cout << result;

   return EXIT_SUCCESS;
}

int lengthOfLongestSubstring(string s) {

   int count = 0;

   for (int i = 0; i < s.length(); ++i) {
       if (s[i] == s[i + 1]) {
         count += 0;
       } else {
          ++count;
       }
   }
   return count;
}