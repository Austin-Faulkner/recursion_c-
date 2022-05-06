// Rectangle.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "Rectangle.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    double houseWidth,
           houseLength;

    cout << "In feet, how wide is your house? ";
    cin >> houseWidth;

    cout << "In feet, how long is your house? ";
    cin >> houseLength;

    Rectangle house(houseWidth, houseLength);

    cout << setprecision(2) << fixed
         << "The house is " << house.getWidth() << " feet wide." << endl
         << "The house is " << house.getLength() << " feet long." << endl
         << "The house is " << house.getArea() << " square feet in area." << endl;

    // system("pause");

    return 0;
}
