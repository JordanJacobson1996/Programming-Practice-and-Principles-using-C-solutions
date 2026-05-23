// integer_comparison.cpp : Question 4 chapter 2

#include <iostream>

int main()
{
    //variables
    int val1 = 0;
    int val2 = 0;
    int smallest = 0;
    int larger = 0;
    int sum = 0;
    int diff = 0;
    int product = 0;
    double ratio = 0;

    std::cout << "Please enter two integer values below, such as 6 or 7\n"
        << "integer one: ";
    std::cin >> val1;
    std::cout << "integer two: ";
    std::cin >> val2;

    if (val1 < val2) {
        smallest = val1;
        larger = val2;
    }
    else {
        smallest = val2;
        larger = val1;
    }

    //calculations of sum, difference, product and ratio
    sum = val1 + val2;
    diff = val1 - val2;
    product = val1 * val2;
    ratio = val1 / val2;

    std::cout << "See below comparison of your integers:\n"
        << "The smallest integer is " << smallest << "\n"
        << "The largest integer is " << larger << "\n"
        << "The sum of the two integers is " << sum << "\n"
        << "The difference between the two integers is " << diff << "\n"
        << "The product of the two integers is " << product << "\n"
        << "The ratio of the two integers is " << ratio << "\n";

}