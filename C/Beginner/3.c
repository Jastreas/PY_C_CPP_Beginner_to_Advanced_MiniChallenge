#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_prime_number(int number) {
    // Description: Checks if a number is prime.
    // Parameters:
    //   number: The number to check.
    // Returns: true if the number is prime, false otherwise.

    if (number <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }

    int limit = (int)sqrt(number); // Calculate the limit once

    for (int i = 2; i <= limit; i++) {
        if (number % i == 0) {
            return false; // Number is divisible by i, so it's not prime
        }
    }

    return true; // Number is prime
}

int main() {
    // Test numbers from 0 to 99
    for (int i = 0; i < 100; i++) {
        if (is_prime_number(i)) {
            printf("%d is a prime number.\n", i);
        } else {
            printf("%d is not a prime number.\n", i);
        }
    }

    return 0;
}