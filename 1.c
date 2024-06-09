#include <stdio.h>

int find_min(int myarray[], int length);

int main() {

    int myarray1[] ={5,9,10,11,4,3,1,6,7};
    int myarray2[] ={2,5,9,2,5,3,0};
    
    int min1 = find_min(myarray1,sizeof(myarray1)/sizeof(myarray1[0]));
    int min2 = find_min(myarray2, sizeof(myarray2)/sizeof(myarray2[0]));
    printf("min1: %d\n", min1);
    printf("min2: %d\n", min2);
    return 0;
}

int find_min(int myarray[], int length) {
       
    int min;

    min= myarray[0];
    for (int i=0; i< length; i++) {
        if (myarray[i]<min) {
            min=myarray[i];
        }
    }
    return min;
}