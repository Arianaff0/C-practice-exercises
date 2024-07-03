#include <stdio.h>
#include <stdlib.h>

void merge(int ar1[], int l1, int ar2[], int l2, int final[]);

int main() {
    int ar1[] = {1,3,5,7,9};
    int ar2[] = {2,4,5,6,8};
    int r[]={1,2,3,4,5,5,6,7,8,9};

    int *result = malloc(sizeof(int)*(sizeof(ar1)/sizeof(int))+(sizeof(ar2)/sizeof(int)));
    merge(ar1, sizeof(ar1)/sizeof(int), ar2, sizeof(ar2)/sizeof(int), result);
    printf("result[]:");
    for (int i=0; i< (sizeof(ar1)/sizeof(int))+(sizeof(ar2)/sizeof(int)); i++) {
        printf("%d ", result[i]);
    }
    free(result);
    return 0;
}

void merge(int ar1[], int l1, int ar2[], int l2, int final[]){
    int i=0, j=0, k=0;  //int i is counter for l1, j is counter for l2
    while (i<l1 && j<l2) {
        if (ar1[i] < ar2[j]) {
            final[k]= ar1[i];

            i++;
            k++;
        }
        else {
            final[k]=ar2[j];
            j++;
            k++;
        }
    }
    if (i<l1) {
        final[k]=ar1[i];
        i++; 
    }
    if (j<l2) {
        final[k]=ar2[j];
        j++;
    }
}