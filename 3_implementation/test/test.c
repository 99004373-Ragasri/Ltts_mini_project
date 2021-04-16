#include <stdio.h>
#include <string.h>
#include <stdbool.h>
char word[50];
void clrscr(void);
bool checkAlphabet(char *, char);

int main() {
    printf("~~~~~~~~~~~~~~~:HANGMAN:~~~~~~~~~~~~~~~\n~~~~~~~~~~~Word guess game~~~~~~~~~~~\n");
    int n;
     printf("------------------\n");
    char word[50];
    char temp[50];
    int i;
    char enteredAlphabets[29] = "[abcdefghijklmnopqrstuvwxyz]";
    char alphabet;
    char copy[50];
    int chances = 7;
    int flag;
    scanf("%s",word);
    for ( i = 0; i < strlen( word); i++) {
        temp[i] = '-';
    }
    temp[i] = '\0';
      
    while (1) {
    printf("GUESS:%s\n", temp);
    printf("YOU GOT %d CHANCES", chances);  
    printf("\n%s", enteredAlphabets);
    strcpy(copy, temp);
    printf("\n>");
    scanf(" %c", &alphabet);
    for (i = 0;enteredAlphabets[i] != '\0'; i++) {
        if (enteredAlphabets[i] == alphabet) {
            enteredAlphabets[i] = '-';
            flag = 1;
            break;
        }
        flag = 0;
    }
    if (flag == 0) {
        printf("Already guessed : %c\n", alphabet);
        continue;
    }
    for (i = 0; word[i] != '\0'; i++) {
        if (word[i] == alphabet) {
           temp[i] = alphabet;
        }
    }

    if (strcmp(temp, word) == 0) {
        printf("> %s \n :)YOU WON... \n", word);
        break;
    } 
    if (!(strcmp(copy, temp))) {
        chances--;
        if ( chances == 0 ) {
            printf(" :( YOU LOST... \n> %s \n ", word);
            break;
        }
    }
}
    return 0;
}
   

