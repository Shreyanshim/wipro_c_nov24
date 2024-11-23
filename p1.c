// Q1

#include <stdio.h>
#include <math.h>


int isPrime(int num) {
    if (num <= 1) return 0; 
    if (num <= 3) return 1; 

  
    if (num % 2 == 0 || num % 3 == 0) return 0;

 
    for (int i = 5; i <= sqrt(num); i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return 0;
    }
    return 1;
}

int main() {
    int number=0;
    printf("Enter a number to check if it is prime: ");
    scanf("%d", &number);

    if (isPrime(number))
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);

    return 0;
}

/*
Discussion on the need of setting the condition to root of input number and not n/2
-------------------------------------------------------------------------------------
Answer:- For n/2: Iterating upto n/2 is wasteful since divisors larger than square root of n
have already been rolled out by their smaller counterparts. 
Example:- 1] For n = 49, divisors are 1,7,49.Checking beyond sqaure root of 49 is 7 is unnecessary.
          2] For n = 10007, square root of 10007 is approximately 100. Testing up to 100 is much faster than
          testing up to 5003.

*/
