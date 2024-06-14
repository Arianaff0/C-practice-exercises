#include <stdio.h>
#include <string.h>
#include <ctype.h>

int counting_vowels(char array[], int length);

int main() {
    char s1[] = "number of vowEls in here";
    char array[]={'a','e','i','o','u'};
    int num_s1 = counting_vowels(s1, strlen(s1));
    int num_array = counting_vowels(array, sizeof(array)/sizeof(array[0]));

    printf("There are %d many vowels in s1\n", num_s1);
    printf("There are %d many vowels in array\n", num_array);
    return 0;
}

int counting_vowels(char array[], int length) {
    // int count=0;
    // for (int i = 0; i<length; i++) {
    //     char lowerCase = tolower(array[i]);
    //     if (lowerCase=='a'||lowerCase=='e'||lowerCase=='i'||lowerCase=='o'||lowerCase=='u') {
    //         count+=1;
    //     }
    // }
    // return count;
    int count =0;
    for (int i=0; i<length; i++) {
        switch (tolower(array[i])) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                count++;
        }
    }
    return count;
}