#include <iostream>
#include <cstring>

int main() {
    const int MAX_LENGTH = 100;
    char firstString[MAX_LENGTH];
    char secondString[MAX_LENGTH];

    std::cout << "Enter the first string: ";
    std::cin.getline(firstString, MAX_LENGTH);

    std::cout << "Enter the second string: ";
    std::cin.getline(secondString, MAX_LENGTH);

    strcpy(firstString, secondString);

    std::cout << "The new string value is: " << firstString << std::endl;

    return 0;
}
