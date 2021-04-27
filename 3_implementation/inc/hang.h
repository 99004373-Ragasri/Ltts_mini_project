#ifndef _HANGMAN_H_
#define _HANGMAN_H_

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

void clrscr(void);
/*
to clear the screen
*/

char (*loadDict(int *n))[50];
/*
to load the dictionary
*/ 
int getRandom(int n);
/*
to acess a random word from dictionary
*/

#endif