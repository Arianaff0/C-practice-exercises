#include <stdio.h>

/**
 * dot product ex
 * 
 * v1 = (2, 5, 4)
 * v2 = (3, 2, 1)
 * r = (2*3)+(5*2)+(4*1)= 20
 */
int dot_prod_scalar(int *v1, int *v2, int length1, int length2);

int main() {

    int vector1[]= {2, 5, 4};
    int vector2[]= {3, 2, 2};
    int length1 = sizeof(vector1)/sizeof(vector1[0]);
    int length2 = sizeof(vector2)/sizeof(vector2[0]);

    int dot_prod_sum = dot_prod_scalar(vector1, vector2, length1, length2);
    printf("The vectors are:\n");
    printf("(%d, %d, %d)\n",vector1[0],vector1[1], vector1[2]);
    printf("(%d, %d, %d)\n",vector2[0],vector2[1], vector2[2]);
    printf("the dot product of the two vectors are: %d\n", dot_prod_sum); 
    return 0;
}

int dot_prod_scalar(int *v1, int *v2, int length1, int length2) {
    int sum=0;
    int comp_sum=0;
    for (int i=0; i<length1; i++) {
        int comp_sum= v1[i]*v2[i];
        sum+=comp_sum;
    }
    return sum;
}