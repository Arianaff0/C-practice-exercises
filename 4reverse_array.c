#include <stdio.h>

void reverse(int array[], int length) {
    int temp = 0;
    for (int i =0; i<length/2; i++){
        temp = array[i];
        array[i]=array[length-i-1];
        // printf("%d\n", array[i]);
        array[length-i-1]=temp;
        // printf("%d\n", array[length-i-1]);

    }
}
int main() {
    int myarray1[] ={1,2,3,4,5,6,7,8,1};
    int length1 = sizeof(myarray1)/sizeof(myarray1[0]);
    reverse(myarray1, length1);

    for (int i=0; i<length1; i++) {
        printf("myarray1[%d]=%d\n", i, myarray1[i]);
    }

    return 0;
}