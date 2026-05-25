// number_convert_to_string.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Exercise nine chapter 2 programming principles and practice in CPP
//convert spelled out numbers to actual integers unless it is a number it doesn't know.

#include <iostream>
using namespace std;

int main()
{
    string string_input = "";
    string string_output = "Oops, I don't know that one.";
    int integer_output = 1;

    std::cout << "Please spell out an integer below such as one or two\n";

    while (cin >> string_input) //keep open to test multiple integers.
    {
        if (string_input == "one" || string_input == "One")
        {
            integer_output = 1;
            std::cout << integer_output << "\n";
        }
        else if (string_input == "two" || string_input == "Two")
        {
            integer_output = 2;
            std::cout << integer_output<<"\n";
        }
        else if (string_input == "three" || string_input == "Three")
        {
            integer_output = 3;
            std::cout << integer_output<<"\n";
        }
        else if (string_input == "four" || string_input == "Four")
        {
            integer_output = 3;
            std::cout << integer_output << "\n";
        }
        else
        {
            std::cout << string_output << "\n";
        }
    }
}
