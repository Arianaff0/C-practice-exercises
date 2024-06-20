#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int word_count(char *string, char *word);

int main() {
    char *string = "with apples and pears, with good souls. With";
    char *word = "with";
    int num_of_word_occur = word_count(string, word);
    printf("There are %d occurences of %s", num_of_word_occur, word);
    return 0;
}

/**
 * A string with some words in it
 * 
 * with
 */
int word_count(char *string, char *word) {
    int strlength = strlen(string);
    int wordlength = strlen(word);
    int count = 0;
    

    for (int i = 0; i<= strlength-wordlength; i++) {
        bool wordfound = true;
        if (tolower(string[i])==tolower(word[0])) {
            for (int j = 0; j<wordlength; j++) {
                if (tolower(string[i+j])!=tolower(word[j])) {
                    wordfound = false;
                    break;  
                }
            }
            if (wordfound) {
                count++;
            }
        }
    }
    return count;

}