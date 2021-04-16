## Introduction
#### Hangman is a popular word guessing game where the player attempts to build a missing word by guessing one letter at a time. If a player guesses the word within the chances then he wins.   After a certain number of incorrect guesses, the game ends and the player loses. The game process is shown by a sketch of a man being hanged.
### Research
### Hangman Game Play
##### ( https://www.youtube.com/watch?v=cGOeiQfjYPk )
##### One player thinks of a word or phrase, the others try to guess what it is one letter at a time. The player draws a number of dashes equivalent to the number of letters in the word. If a guessing player suggests a letter that occurs in the word, the other player fills in the blanks with that letter in the right places. If the word does not contain the suggested letter, the other player draws one element of a hangman’s gallows. As the game progresses, a segment of the gallows and of a victim is added for every suggested letter not in the word. The player wins if he guesses the word within the chances or else the player will lose the game.

### Hangman Formation Chances
                             
### Cost and Features
#### [swot.docx](https://github.com/ragasrikonakalla/Ltts_mini_project/files/6324158/swot.docx)
#### •	A random word is taken from a dictionary.
#### •	The player gives the input from a given set of alphabets.
#### •	The player gets 7 chances to guess the word.
#### •	The formation of  hangman takes place for every incorrect guess.
#### •	The formation of  hangman takes place for every incorrect guess.
#### •	The formation of  hangman takes place for every incorrect guess.
### Defining Our System
#### A random word is taken from a dictionary containing set of words. The player should give the input within the alphabets. The player has to guess the word within 7 chances. For every correct guess the letter is revealed in its position. If the player guesses the wrong letter the formation of hangman starts. The player wins if he guesses the word within the given 7 chances or else the complete formation of hangman occurs and the player loses the game. 

## Swot Analysis

## ![swott](https://user-images.githubusercontent.com/39005938/115008809-3503f900-9ec9-11eb-8362-cb08c7be6fdd.PNG)

### 4W's and 1'H
### Who:
#### This game can be played by all age groups without age barrier. 
### What:
#### Hangman is a popular word guessing game where the player attempts to build a missing word by guessing one letter at a time before hangman formation finishes.
### When:
#### This game is played when a person is wants fun aand simultaneously can improve vocabulary. This game is acts as a stress reliever.
### Where:
#### This game can be played anywhere independent of the platforms and can be act as a tool for improving vocabulary.
### How:
#### Some words are stored in a dictionary. A random word is taken from dictionary. The player gives the input as a alphabet to guess the word. The player gets 7 chances to guess the correct word. For every incorrect letter the sketch of hangman begins. Once the formation is done the player will lose the game otherwise he wins.
## Detail requirements
### High Level Requirements:
   | ID | Description | Category | Status | 
| ----- | ----- | ------- | ---------|
| HR01 | Able to access the word from file for guessing | Techincal | IMPLEMENTED | 
| HR02 | Proper flow while checking a letter and proceeding for next steps | Techincal |  IMPLEMENTED  |
| HR03 | Game should ends with accurate results | Techincal |  IMPLEMENTED  |

### Low level Requirements:
| ID | Description | HLR ID | Status (Implemented/Future) |
| ------ | --------- | ------ | ----- |
| LR01 | Able to access the word from file | HR01 |  IMPLEMENTED  |
| LR02 | Able to store the incomplete word with blank spaces after every guess | HR02 |  IMPLEMENTED |
| LR03 | Able to construct the hangman sketch after every wrong guess | HR02 | FUTURE |
| LR04 | Able to check whether a letter from alphabet is present or not | HR02 |  IMPLEMENTED  |
| LR05 | Able to specify user has won if the word is guessed within 7 incorrect guesses	 | HR03 |  IMPLEMENTED  |
| LR06 | Able to specify user has lost if the word is not guessed within 7 incorrect guesses | HR03 |  IMPLEMENTED  |

  
		
		


