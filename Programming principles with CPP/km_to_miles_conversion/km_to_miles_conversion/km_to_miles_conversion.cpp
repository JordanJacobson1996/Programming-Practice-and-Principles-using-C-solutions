#include <iostream>

int main()
{
    double distance_km = 0;
    double distance_miles = 0;

    std::cout << "Lets convert miles to kilometres\nEnter in a distance in miles:\n";
    std::cin >> distance_miles;

    distance_km = distance_miles * 1.609344; //miles to km conversion

    std::cout << distance_miles << " miles is " << distance_km << " km";
}

