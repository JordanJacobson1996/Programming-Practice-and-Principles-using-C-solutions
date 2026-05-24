// number_orderer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int integer_one;
    int integer_two;
    int integer_three;
    int temp_int = 0;

    std::cout << "Please enter three integers: \n";
    std::cout << "Integer one: ";
    std::cin >> integer_one;
    std::cout << "Integer two: ";
    std::cin >> integer_two;
    std::cout << "Integer three: ";
    std::cin >> integer_three;

    while (integer_one > integer_two || integer_two > integer_three)
    {
        if (integer_one > integer_two)
        {
            temp_int = integer_one;
            integer_one = integer_two;
            integer_two = temp_int;
        }
        else if (integer_two > integer_three)
        {
            temp_int = integer_two;
            integer_two = integer_three;
            integer_three = temp_int;
        }
    }

    std::cout << integer_one << " ";
    std::cout << integer_two<<" ";
    std::cout << integer_three;
}
