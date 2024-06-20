#include <stdio.h>


void chara_remover(char *string, char character);

int main() {
    char string[] = "aaaAAAxxAAAaaaBBBCCaaaaAa";
    char character = 'a';
    printf("The original str: %s\n", string);
    chara_remover(string, character);
    printf("The new string: %s\n", string);
    return 0;
}
/**
 * We've got a string.
 * 
 * o
 */
void chara_remover(char *string, char character) {
    int pos = 0;
    while (string[pos]!='\0') {
        if (string[pos]==character) {
            int newpos = pos;
            while (string[newpos]!='\0') {
                string[newpos]=string[newpos+1];
                newpos++;
            }
            
        }
        else {
            pos++;
        }
    }
}