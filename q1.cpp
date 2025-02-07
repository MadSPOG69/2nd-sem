#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= std::sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void nextPrime(int n) {
    int next = n + 1;
    while (!isPrime(next)) {
        next++;
    }
    std::cout << "The next prime number after " << n << " is " << next << ".\n";
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    if (isPrime(n)) {
        nextPrime(n);
    }
    else {
        std::cout << std::endl;
        for (int i = 1;i <= n; i++) {
            if (n % i == 0) std::cout << i << ' ';
        }
    }

    return 0;
}
