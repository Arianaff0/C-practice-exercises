#include <stdio.h>

/**
 * Fibo seq: seq of nums created by sum of the two previous numbers, starting
 * with 0 and 1.
 */

int fib(int n);

int main() {
    int fib1 = 0;
    int fib2 = 1;
    int fibn = 0;
    int length = 0;

    do {
        printf("Enter sequence length: ");
        scanf("%d", &length);
        if (length <3) {
            printf("Please enter more than 2 for length.\n");
        }
    } while (length < 3);

    printf("\niterative sol\n");
    printf("%d,%d,", fib1, fib2);
    for (int i =2; i<length; i++) {
        fibn = fib1+fib2;
        printf("%d", fibn);

        fib1 = fib2;
        fib2 = fibn;
        if (i != (length-1)) {
            printf(",");
        }
        else {
            printf("\n");
        }
    }
    printf("\nRecursive sol\n");

    for (int i=0; i<length; i++) {
        printf("%d", fib(i));
        if (i != (length-1)) {
            printf(",");
        }
        else {
            printf("\n");
        }
    }
    return 0;
}

int fib(int n) {
    if (n>1) {
        return fib(n-1)+fib(n-2);
    }
    else if (n==0) {
        return 0;
    }
    else if (n==1) {
        return 1;
    }
    else {
        printf("Error: n must be >=0");
        return -1;
    }
}