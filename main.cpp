#include <iostream>
#include <vector>

#include "next-prime.cpp"

int main(int argc, char* const argv[]) {
    char input;
    int nextPrime;
    int currPrime = 1;
    bool done = false;

    do {
        std::cout << "Get next prime? (y/n): ";
        std::cin >> input;

        if (input == 'y') {
            nextPrime = getNextPrime(currPrime);
            std::cout << nextPrime << " " << std::endl;
            currPrime = nextPrime;
        } else {
            done = true;
        }

    } while (!done);
}