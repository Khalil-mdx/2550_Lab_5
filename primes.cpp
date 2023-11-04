#include <iostream>
#include <vector>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;

    // Asking the user for an integer
    std::cout << "Enter an integer: ";
    std::cin >> num;

    // Vector to store prime numbers
    std::vector<int> primes;

    // Finding prime numbers less than or equal to the given number
    for (int i = 2; i <= num; ++i) {
        if (isPrime(i)) {
            primes.push_back(i);
        }
    }

    // Outputting the prime numbers
    std::cout << "Primes to " << num << " are:";
    for (int prime : primes) {
        std::cout << " " << prime;
    }
    std::cout << std::endl;

    return 0;
}
