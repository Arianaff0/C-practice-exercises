#include <stdio.h>

int main() {
    int myarray[]={1,2,3,4,5,6};
    int max= myarray[0];
    int length= sizeof(myarray)/sizeof(myarray[0]);
    for (int i=0; i<length; i++) {
        if (myarray[i]>max) {
            max = myarray[i];
            printf("the num now is:%dat position%d\n",myarray[i],i);
        }
    }
    printf("max is: %d\n", max);
    return 0;
}