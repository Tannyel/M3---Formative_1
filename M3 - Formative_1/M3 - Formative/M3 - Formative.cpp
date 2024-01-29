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

    int result = strcmp(firstString, secondString);

    if (result == 0) {
        std::cout << "The strings are equivalent to each other." << std::endl;
    }
    else if (result < 0) {
        std::cout << "String 1 is less than String 2" << std::endl;
    }
    else {
        std::cout << "String 1 is greater than String 2" << std::endl;
    }

    return 0;
}
