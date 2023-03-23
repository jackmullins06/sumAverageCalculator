#include <iostream>
#include <vector>

std::vector<int> promptForInput() {
    std::vector<int> numberList;
    int number;

    std::cout << "Please enter numbers, separated by spaces. Enter a negative number to stop:" << std::endl;

    while (true) {
        std::cin >> number;

        if (number < 0) {
            break;
        }
        numberList.push_back(number);
    }
    return numberList;
}

int calculateSum(std::vector<int> numberList) {
    int total = 0;
    std::vector<int>::iterator it = numberList.begin();

    while (it != numberList.end()) {
        total += *it;
        ++it;
    }

    return total;
}

double calculateAvereage(std::vector<int> numberList) {
    return static_cast<double>(calculateSum(numberList)) / numberList.size();
}

int main() {
    std::vector<int> numberList = promptForInput();
    std::cout << "The sum of the list you provided is: " << calculateSum(numberList) << std::endl;
    std::cout << "The average oft eh list you provided is: " << calculateAvereage(numberList) << std::endl;

    return 0;
}