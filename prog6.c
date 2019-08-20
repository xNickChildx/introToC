//NICK Child, 7-23-2019, introToC,
#include<stdio.h>
#include<string.h>//for strcpy and strcat
#include<ctype.h> //for tolower for the Q to quit 
#define WORDSIZE 20
//A function that greets the user
void greeting(void);
//A function to get the words 
void getWords(char a[], char b[]);
void concenate(char a[], char b[],char c[],char d[]);
int main()
{

char a[WORDSIZE]="";
char b[WORDSIZE]="";
char c[WORDSIZE]="";
char d[WORDSIZE]="";


char again;
greeting();
do {
getWords(a,b);
strcpy(c,a);
strcpy(d,b);
concenate(a,b,c,d);
printf("The new words are %s and %s\nEnter 'q' to quit or anything else to continue:\n\n",c,d);
scanf(" %c", &again);
 
} while(tolower(again) !='q');

printf("\nGoodbye!\n\n");
return 0;
}
void greeting(void){
	printf("Welcome, you will enter two words and they will be joined together to form 2 different new words\n\n");
}
void getWords( char a[], char b[]){
	printf("Enter two words:\n");
	scanf(" %s %s", a, b);
}
void concenate(char a[], char b[], char c[], char d[]){
	strcat(c,b);
	strcat(d,a);
}
