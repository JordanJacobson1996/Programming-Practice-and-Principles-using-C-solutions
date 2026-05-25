// is_even.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Exercise 8 chapter 2 Programming principles and practice in CPP.
// Test if an integer is even or odd.

#include <iostream>
using namespace std;

int main()
{
    int test_int = 1;
    int result_int = 0;

    std::cout << "Enter an integer below to test whether it is even or odd\n";
    while (cin >> test_int)
    {
        result_int = test_int % 2;

        if (result_int == 0)
        {
            std::cout << "Integer " << test_int << " is even.\n";
        }
        else
        {
            std::cout << "Integer " << test_int << " is odd.\n";
        }
    }
}