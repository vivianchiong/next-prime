bool isPrime(int num) {
    bool isPrime = true;
    for (int i = 2; i <= num/2; ++i) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

int getNextPrime(int num) {
    for (int i = num + 1; ; ++i) {
        if (isPrime(i)) {
            return i;
        }
    }
}