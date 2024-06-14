#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *string_append(char *s1, char *s2);

int main() {
    char first[20]= "First ";
    char second[10]="Second";
    strcat(first, second);

    char s1[]= "abc";
    char s2[] = "wxyz";

    char *s = string_append(s1, s2);
    printf("string: %s\n", s);
    free(s);
    return 0;
}

char *string_append(char *s1, char *s2) {
    int str_length1 = strlen(s1);
    int str_length2 = strlen(s2);
    int size = str_length1+ str_length2 + 1;
    char *s = calloc(size, sizeof(char));

    for (int i = 0; i<str_length1; i++) {
        s[i]= s1[i];
    }
    for (int i=0; i< str_length2; i++) {
        s[str_length1+i]= s2[i];
    }
    s[size -1] = '\0';
    return s;
}