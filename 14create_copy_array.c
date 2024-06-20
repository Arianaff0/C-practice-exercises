#include <stdio.h>
#include <stdlib.h>

int *array_copy(int *array, int length);
//dynamic memory allocation
int main() {
    int a1[] = {1,2,3,4,5};
    int a2[] ={99,50,30,1};
    int *a1_copy = array_copy(a1, sizeof(a1)/sizeof(a1[0]));
    int *a2_copy = array_copy(a2, sizeof(a2)/sizeof(a2[0]));

    a1[0]=10;
    for (int i = 0; i<sizeof(a1)/sizeof(a1[0]); i++) {
        printf("a1_copy[%d]: %d\n", i, a1_copy[i]);
    }
    a2[0]=0;
    for (int i = 0; i<sizeof(a2)/sizeof(a2[0]); i++) {
        printf("a2_copy[%d]: %d\n", i, a2_copy[i]);
    }
    // int *b;     so basically, *b is a pointer to an integer and you can point it to an array, 
    // b = a;      and whats happening here is that we are assigning the address of b to the address of a,
    // a[0] = 10;  so printing b[0] gives the same as a[0]. They refer to the same memory address.
    // printf("b[0]= %d\n", b[0]);
    // printf("b: %p\na: %p\n", b,a);  
    printf("a1_copy: %p\na1: %p", a1_copy, a1);
    return 0;
}

int *array_copy(int *array, int length) {
    int *c = malloc(length *sizeof(int));
    for (int i =0; i<length; i++) {
        c[i]= array[i];
    }
    return c;
}