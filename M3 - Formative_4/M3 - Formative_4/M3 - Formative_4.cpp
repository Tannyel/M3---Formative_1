#include <iostream>
#include <cstring>

void checkPalindrome(const char* inputWord) {
    int length = strlen(inputWord);
    int isPalindrome = 1;

    for (int i = 0; i < length / 2; ++i) {
        if (inputWord[i] != inputWord[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        std::cout << "The word is a palindrome." << std::endl;
    }
    else {
        std::cout << "The word is not a palindrome." << std::endl;
    }
}

int main() {
    const int MAX_LENGTH = 100;
    char inputWord[MAX_LENGTH];

    std::cout << "Enter a word: ";
    std::cin.getline(inputWord, MAX_LENGTH);

    checkPalindrome(inputWord);

    return 0;
}
