#include <iostream>

int main()
{
    int favorite_number;

    std::cout << "Enter your fav number between 1 and 100: ";

    std::cin >> favorite_number;

    std::cout << "Amazing that's my fav number too!" << std::endl;

    std::cout << "No really!!, " << favorite_number << " is my fav number!" << std::endl;
    
    return 0;
}