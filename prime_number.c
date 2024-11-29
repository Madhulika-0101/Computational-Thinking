#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {

    if (num <= 1) {
    
        return false; // Numbers less than or equal to 1 are not prime
        
    }

    // Check divisors from 2 to the square root of num
    for (int i = 2; i * i <= num; i++) {
    
        if (num % i == 0) {
        
            return false; // num is divisible by i, so it is not prime
            
        }
    }
    return true; // num is prime
}

int main() {

    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPrime(number)) {
    
        printf("%d is a prime number.\n", number);
        
    } else {
    
        printf("%d is not a prime number.\n", number);
        
    }

    return 0;
}

