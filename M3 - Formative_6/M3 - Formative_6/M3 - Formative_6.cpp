#include <iostream>

int main() {
    const int MAX_STRING_LENGTH = 100;
    char inputString[MAX_STRING_LENGTH];

    std::cout << "Enter a string: ";
    std::cin.getline(inputString, MAX_STRING_LENGTH);

    std::cout << "Words in reverse order:" << std::endl;

    int endIndex = strlen(inputString) - 1;

    for (int i = endIndex; i >= 0; --i) {
        while (i >= 0 && inputString[i] != ' ' && inputString[i] != '\t') {
            --i;
        }

        for (int j = i + 1; j <= endIndex && inputString[j] != ' ' && inputString[j] != '\t'; ++j) {
            std::cout << inputString[j];
        }

        if (i > 0) {
            std::cout << ' ';
        }
    }

    std::cout << std::endl;

    return 0;
}
