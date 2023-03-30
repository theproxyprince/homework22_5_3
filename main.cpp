#include <iostream>

int main() {
    std::string firstWord;
    std::string secondWord;

    std::cin >> firstWord >> secondWord;

    std::sort(firstWord.begin(), firstWord.end());
    std::sort(secondWord.begin(), secondWord.end());

    std::cout << ((firstWord == secondWord) ? "Слово является анаграммой\n" : "Слово не является анаграммой\n");
}
