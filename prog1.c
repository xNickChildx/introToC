#include <stdio.h>
#define MYNAME "NICK CHILD"
#define FAU_ID "nchild2019"
int main(){

	int number;
	double dub;
	char init;

	printf("Hello WOOOORLLD\n");
	printf("I was coded by %s\n", MYNAME);
	printf("My FAU username is: %s\n\n", FAU_ID);

	printf("please enter a whole number:\n");
	scanf("%d",&number);
	printf("You entered the number: %d\n\n",number);

	printf("please enter a decimal number:\n");
	scanf("%lf",&dub);
	printf("You entered the number: %lf\n\n",dub);

	printf("please enter your middle initial:\n");
	scanf(" %c",&init);
	printf("You entered the initial: %c.\n\n",init);

	printf("Thank you and have a nice day!\n\n");

	return 0;
}
