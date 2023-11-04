#include <iostream>

int main() {
    int firstNumber, secondNumber, sum = 0;

    // Asking the user for two numbers
    std::cout << "Enter two numbers: ";
    std::cin >> firstNumber >> secondNumber;

    // i is the first number, loop continues adding one to the sum until the range between both numbers becomes 0
    for (int i = firstNumber; i <= secondNumber; ++i) {
        sum += i;
    }

    // Outputting the result
    std::cout << "Sum from " << firstNumber << " to " << secondNumber << " is " << sum << std::endl;

    return 0;
}
