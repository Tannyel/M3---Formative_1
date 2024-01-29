#include <iostream>
#include <cstring>
#include <cctype>

void convertCase(char* inputString) {
    int length = strlen(inputString);

    int uppercaseFlag = 1;
    int lowercaseFlag = 1;

    for (int i = 0; i < length; ++i) {
        if (islower(inputString[i])) {
            uppercaseFlag = 0;
        }
        else if (isupper(inputString[i])) {
            lowercaseFlag = 0;
        }
    }

    for (int i = 0; i < length; ++i) {
        if (uppercaseFlag) {
            inputString[i] = tolower(inputString[i]);
        }
        else if (lowercaseFlag) {
            inputString[i] = toupper(inputString[i]);
        }
    }
}

int main() {
    const int MAX_LENGTH = 100;
    char inputString[MAX_LENGTH];

    std::cout << "Enter a string: ";
    std::cin.getline(inputString, MAX_LENGTH);

    convertCase(inputString);

    std::cout << "Converted string: " << inputString << std::endl;

    return 0;
}
