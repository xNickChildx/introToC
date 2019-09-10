#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAXGUESSES 5
#define WORDSIZE 25
//this function provides instructions to the user on how to play the game
void GameRules();
//this function changes a character array to all lowercase letters
void LowerCaseWord(char word[]);
//this function asks the user if they want to play another game (1 to continue, 0 to Quit)
void PlayAgain(int *againPtr);
//this function creates the secret word array that is all dashes
void CreateSecretWord(char solution[], char secretword[]);
//this function gets the users guess letter
//changes it to lowercase
//and adds it to the lettersGuessed array
void GetTheLetterGuess(char lettersGuessed[], char *letterPtr, int *numPtr);
//this function replaces any dash in the secretword with the current character entered by the user
//this function will let the user know if the letter was in the word
void ReplaceDash(char solution[], char secretword[], char letter);
//this function compares the solution and the guess word
//tells the user if they have correctly guessed the word
void DidYouWin(char solution[], char guess[]);
// this function runs one round of the game
//input: solution word from the file and the secret word made of dashes
//void return type
//all other functions to Play one round of a game
//are called from within the PlayOneGame function
void PlayOneGame(char solution[], char secretword[]);

int main(void){

	char solution[WORDSIZE];
	
	
	int againFlag=1;
	FILE *file;
	GameRules();
	file=fopen("inputWords.txt","r");
	while (EOF!=fscanf(file, " %s", solution) && againFlag==1){
		LowerCaseWord(solution);
		char secret[WORDSIZE]="";
		CreateSecretWord(solution, secret);
		PlayOneGame(solution,secret);
		PlayAgain(&againFlag);
	}







return 0;
}

void GameRules(){
printf("Welcome to the wonderful word guessing game!\nYou will have 5 chances to enter letters contained in the word.\n Then you will have only one chance to guess the word.\nAt the end you will have an option to play again or not. \nGood Luck!!!\n");
}

void LowerCaseWord(char word[]){
	for(int i=0; i< strlen(word);i++){
		word[i]=tolower(word[i]);
	}

}
//this function asks the user if they want to play another game (1 to continue, 0 to Quit)
void PlayAgain(int *againPtr){
	printf("If you would like to play again type 1, if you would like to exit type 0\n");
	scanf("%d", againPtr);


}

void CreateSecretWord(char solution[], char secretword[]){
	for(int i=0;i<strlen(solution);i++){
		secretword[i]='-';
	}
}

void GetTheLetterGuess(char lettersGuessed[], char *letterPtr, int *numPtr){
	scanf(" %c",letterPtr);
	*letterPtr= tolower(*letterPtr);
	lettersGuessed[*numPtr]=*letterPtr;
}

//this function replaces any dash in the secretword with the current character entered by the user
//this function will let the user know if the letter was in the word
void ReplaceDash(char solution[], char secretword[], char letter){
	int count=0;
	for(int i=0;i<strlen(solution);i++){
		if(solution[i]==letter){
			secretword[i]=letter;
			count++;
		}

	}
	printf("There are %d %c's\n", count, letter);

}
//this function compares the solution and the guess word
void DidYouWin(char solution[], char guess[]){
	if(strcmp(solution, guess) ==0){
	printf("CONGRADULATIONS YOU HAVE WON! You have correctly guessed the word %s\n", solution);
	}
	else
		printf("Nope! you lose.... The correct word was %s\n", solution);


}

// this function runs one round of the game
//input: solution word from the file and the secret word made of dashes
//void return type
//all other functions to Play one round of a game
//are called from within the PlayOneGame function
void PlayOneGame(char solution[], char secretword[]){
	char chars[MAXGUESSES]="";
        char guess[WORDSIZE]="";
	char tmp='-';
	for(int i=0;i<MAXGUESSES;i++){
	printf("%s\nGuess Number:%d\nEnter your next letter:",secretword, i+1);
	GetTheLetterGuess(guess, &tmp , &i);
	ReplaceDash(solution, secretword, tmp);
	}
	printf("\n%s\nNow it is time to make a guess. Please enter a word:\n", secretword);
	scanf("%s", guess);
	LowerCaseWord(guess);
	DidYouWin(solution, guess);
}

