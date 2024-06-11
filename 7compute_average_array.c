#include <stdio.h>
double find_average(double array[],int length);

int main() {
    double array1[]={2.0,1.3,4.6};
    double array2[]={9,84,8.4};
    double array3[]={9,-9,2,-2,-3,3};

    double ar1 = find_average(array1, sizeof(array1)/sizeof(array1[0]));
    double ar2 = find_average(array2, sizeof(array2)/sizeof(array2[0]));
    double ar3 = find_average(array3, sizeof(array3)/sizeof(array3[0]));

    printf("avg of a1: %lf\n", ar1);
    printf("avg of a2: %lf\n", ar2);
    printf("avg of a3: %.2lf\n", ar3);


    return 0;
}

double find_average(double array[], int length) {
    double sum=0;
    for (int i=0; i<length; i++) {
        sum+=array[i];
    }
    double avg = sum/length;
    return avg;
}