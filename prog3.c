//Nick Child program 3

#include<stdio.h> //printf and scanf
#include<ctype.h> //toupper and tolower
#include<stdlib.h> //abs
#include<string.h>
//EXAMPLE: result = abs(number1 – number2);


int playLetterGame(char a);
int main()
{
	//declare a file pointer
	FILE *inPtr;
	//connect to the file using fopen
	inPtr=fopen("input.txt","r");
	char fromText;
	int check=1;
	while(EOF!=fscanf(inPtr," %c",&fromText)&& check==1){
	check=playLetterGame(fromText);
	}

	fclose(inPtr);
	//close the file pointer using fclose
	return 0;
}
int playLetterGame(char a){
printf("Lets play a game, guess a letter: ");
char b;
char s;
scanf(" %c", &b);
b=tolower(b);
a=tolower(a);

int c=(int)a-(int)b ;
c=abs(c);
if(c==0){printf("Congradulations you did it!\n");}
	else if (c<3){printf("You're very close\n");}
printf("Your guess, %c , was %d letters away from mine, %c\n", b,c,a);
printf("If you want to play again type y: ");
scanf(" %c",&s);
if(s=='y') {return 1;}
return 0;
}


