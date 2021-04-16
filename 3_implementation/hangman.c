/*
 ~~~~~~~~~~~~~: HANGMAN :~~~~~~~~~~~~~~~~
 ~~~~~~~~~: Word guess game :~~~~~~~~~~~~
 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

char word[50];
void clrscr(void);
char (*loadDict(int *n))[50];
int getRandom(int n);
void displayDictionary(char [][50], int n);
bool checkAlphabet(char *, char);

int main() {
    printf("~~~~~~~~~~~~~~~:HANGMAN:~~~~~~~~~~~~~~~\n~~~~~~~~~~~Word guess game~~~~~~~~~~~\n");
    int n;
    char (*dict)[50] = loadDict(&n);
    // After function call 'loadDict', it updates number of
    // words in 'n' and returns a pointer to a two dimensional
    // array ie 'dict'. Every row of 'dict' contains a word
    // loaded from the dictionary. Therefore dict[0] holds first
    // word from the dictionary, dict[1] holds second and so on
    // upto n - 1.
    if (dict == NULL) {
        printf("Memory error: Insufficient RAM.\n");
        printf("Sorry, unable to load dictionary.\n");
        printf("Quitting :(\n");
        exit(1);
    }

   // displayDictionary(dict, n);
    printf("------------------\n");
    // Getting a random word below
    char word[50];
    char temp[50];
    int i;
    char enteredAlphabets[29] = "[abcdefghijklmnopqrstuvwxyz]";
    char alphabet;
    char copy[50];
    int chances = 7;
    int flag;
    strcpy(word, dict[getRandom(n)]);
    // printf("%s\n", word);
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
   

void displayDictionary(char dict[][50], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", dict[i]);
    }
}

int getRandom(int n) {
    static bool flag = true;
    if (flag) {
        srand(time(NULL));
        flag = false;
    }
    return rand() % n;
}

void clrscr(void) {
    printf("\033[2J");
    printf("\033[0;0f");
}

char (*loadDict(int *n))[50] {
    //Choose which ever the dictionary you like by uncommenting 2 lines
    //and commenting the rest
    
    //uncomment below 2 lines for bigDictionary.txt
    //long wordsCount = 267751;
    //FILE *fp =  fopen("bigDictionary.txt", "r");
    
    //-------------------OR------------------------
    //uncomment below 2 lines for smallDictionary.txt
    //long wordsCount = 847;
    //FILE *fp =  fopen("smallDictionary.txt", "r");
    
    //-------------------OR------------------------
    //uncomment below 2 lines for verySmallDictionary.txt
     long wordsCount = 20;
    FILE *fp =  fopen("verySmallDictionary.txt", "r");

    // DO NOT DISTURB BELOW CODE.
    if (!fp) {
        *n = -1;
        return NULL;
    }
    char (*dict)[50] = (char(*)[50])malloc(wordsCount * 50);
    if (!dict) {
        *n = -2;
        return NULL;
    }
    int i = 0;
    while (fgets(dict[i], 50, fp) != NULL) {
        dict[i][strlen(dict[i]) - 1] = '\0';
        i++;
    }
    fclose(fp);
    *n = i;
    return dict;
}
