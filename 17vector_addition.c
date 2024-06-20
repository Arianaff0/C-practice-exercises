#include <stdio.h>
#include <stdlib.h>

/**
 * vector addition
 * 
 * v1 = (2, 5, 4)
 * v2 = (3, 2, 1)
 * r = v1+v2 =(5, 7, 5)
 */
int *vector_addition(int vector1[], int vector2[], int length1, int length2);

int main() {
    int v1[] = {2, 5, 1};
    int v2[] = {3, 2, 1};

    int *r = vector_addition(v1, v2, sizeof(v1)/sizeof(v1[0]), sizeof(v2)/sizeof(v2[0]));

    if (r != NULL) {
        printf("(");
        for (int i=0; i<sizeof(v1)/sizeof(v1[0]); i++) {
            printf("%d",r[i]);
            if (i<(sizeof(v1)/sizeof(v1[0]))-1) {
                printf(",");
            }
        }
    printf(")\n");
    free(r);
    }
    return 0;
}

int *vector_addition(int vector1[], int vector2[], int length1, int length2) {
    if (length1 == length2) {
        int *r = malloc(length1 * sizeof(int));
        if (r == NULL) {
            printf("memory allocation failed\n");
            exit(1);
        }
        for (int i=0; i< length1; i++) {
            r[i] = vector1[i]+vector2[i];
        }
        return r;
    }
    else {
        printf("vector have to have the same dimensions\n");
        return NULL;
    }
}

