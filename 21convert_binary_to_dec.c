#include <stdio.h>
#include <math.h>
#include <string.h>

/**
 * 10101 binary -> 21 decimal
 * 1     0     1       0    1
 * 2^4  2^3   2^2     2^1  2^0
 * 16  + 0  +  4   +   0  + 1
 * add and it equals 21.
 */
int binary_to_dec(char *string, int length );

int main() {
    char binary1[] = "10101";
    int sum_binary1 = binary_to_dec(binary1, strlen(binary1));
    printf("The binary: %s is equivalent to decimal: %d\n", binary1, sum_binary1);

    char binary2[] = "10000001";
    int sum_binary2 = binary_to_dec(binary2, strlen(binary2));
    printf("The binary: %s is equivalent to decimal: %d\n", binary2, sum_binary2);
    return 0;
}

int binary_to_dec(char *string, int length) {
    int sum =0;
    for (int i= length-1, j=0; i >= 0; i--, j++) {
        if (string[i]=='1') {
            sum+= pow(2, j);
               // printf("%d\n", sum);
        }
    }
    return sum;
}