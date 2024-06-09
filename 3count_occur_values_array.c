#include <stdio.h>
int find_occurences(int myarray[], int length);
int main() {

    int myarray1[] ={1,2,3,4,4,5,5,5}; 
    int myarray2[] ={1,2,5,5,3,4,4,5,5};
    int length1 = sizeof(myarray1)/sizeof(myarray1[0]);
    int length2 = sizeof(myarray2)/sizeof(myarray2[0]);   
    int occur1= find_occurences(myarray1, length1);
    int occur2 = find_occurences(myarray2, length2);
    
    printf("the occur of 5 in array1: %d\n", occur1);
    printf("the occur of 5 in array2: %d\n", occur2);
 



    return 0;
}

int find_occurences(int myarray[], int length) {
        
    int count = 0;
    int to_find =5;
    for (int i=0; i<length; i++) {
        if (myarray[i]==to_find) {
            count++;
        }
    }
    return count;
}