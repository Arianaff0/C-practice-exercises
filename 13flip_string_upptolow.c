#include <stdio.h>
#include <string.h>
#include <ctype.h>

void string_upp_low_viceversa(char string[]);

int main() {
    char string1[] = "hello therE";
    string_upp_low_viceversa(string1);
    printf("The new string w upper and lowercase flipped is:\n");
    printf("%s\n", string1);

    return 0;
}

void string_upp_low_viceversa(char string[]) { //can also use *string
    for (int i=0; i<strlen(string); i++) {
        if (isupper(string[i])) {
            string[i]= tolower(string[i]);
        }
        else if (islower(string[i])) {
            string[i]= toupper(string[i]);
        }
    }
}