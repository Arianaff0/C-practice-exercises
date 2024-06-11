#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_palindrome(char string[], int length);

int main() {
    char string1[] ="not a palindrome";
    char string2[]="abccba";
    char string3[]="abcdcba";
    bool str1 = is_palindrome(string1, strlen(string1));
    bool str2= is_palindrome(string2, strlen(string2));
    bool str3= is_palindrome(string3, strlen(string3));

    if (str1==true) {
        printf("\"%s\" is a palindrome\n", string1);
    }
    else{
        printf("\"%s\" is not a palindrome\n", string1);
    }

    if (str2==true) {
        printf("\"%s\" is a palindrome\n", string2);
    }
    else{
        printf("\"%s\" is not a palindrome\n", string2);
    }

    if (str3==true) {
        printf("\"%s\" is a palindrome\n", string3);
    }
    else{
        printf("\"%s\" is not a palindrome\n", string3);
    }
    
    return 0;
}

bool is_palindrome(char string[], int length) {
    for (int i =0; i<length/2; i++) {
        // printf("s:%d\n", length);
        if (string[i]!=string[length-i-1]){
            return false;
        }
    }
    return true;
}