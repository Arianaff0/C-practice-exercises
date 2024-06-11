#include <stdio.h>

int sum_values(int array[], int length);

int main() {
    int array1[]={1,2,6,9,8,7,6,5};
    int array2[]={0,1,0,1};
    int array3[]={0};

    int sum1= sum_values(array1, sizeof(array1)/sizeof(array1[0]));
    int sum2= sum_values(array2, sizeof(array2)/sizeof(array2[0]));
    int sum3= sum_values(array3, sizeof(array3)/sizeof(array3[0]));

    printf("sum of array1 is: %d\n",sum1);
    printf("sum of array2 is: %d\n",sum2);
    printf("sum of array3 is: %d\n",sum3);


    return 0;
}

int sum_values(int array[], int length) {
    int sum = 0;
    for (int i=0; i<length; i++) {
        sum+=array[i];
    }
    return sum;
}