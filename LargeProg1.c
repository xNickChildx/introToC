//Nick Child program 3

#include<stdio.h> //printf and scanf
#include<math.h>

void option1();
void option2(double p, double i, double y);
 void option3(double p, double i, double y);
int  main()
{
	char cont='y';
	int choice=0;
	double y,p,i;
	while( cont=='y'){
		printf("Enter a number to choose a program:\n 1 :calculates the day of the week given a date\n2 : calculates principal on bank account w compunt intrest\n3 : calculates principal on bank account w standard input\n");
		
	scanf("%d",&choice);
	switch(choice){
	case 1:
		option1();
		break;

	case 2:
	       printf("Enter initial principal: \n");
	       scanf("%lf",&p);
		printf("Enter interest rate in decimal:\n");
 		scanf("%lf",&i);
		printf("Enter Years: \n");
		scanf("%lf",&y);		
		option2(p,i,y);
		break;
	case (3):
		printf("Enter initial principal: \n");
		scanf("%lf",&p);
		printf("Enter interest rate in decimal:\n");
		scanf("%lf",&i);
	     	printf("Enter Years: \n");							scanf("%lf",&y);
		option3(p,i,y);
		break;
	default:printf("Invalid option\n");
	}
	printf("If you would like to play again type 'y'\n");
	scanf(" %c",&cont);


	}
	printf("Have a nice day!\n");
		
		return 0;
}
void option1(){
int year, month, day, result;
printf("Think of a date. enter the year: \n");
scanf("%d",&year);
printf("Enter the month: \n");
scanf("%d", &month);
printf("Enter the day: \n");
scanf("%d", &day);

    static int ref[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    year -= month < 3;
    result= ( year + year/4 - year/100 + year/400 + ref[month-1] + day) % 7;
    switch (result){
	case (0): printf("It was a Sunday\n");
		  break;
	case (1): printf("It was a Monday\n");
		break;
	case (2): printf("It was a Tuesday\n");
		  break;
	case(3): printf("It was a Wednesday\n");
		 break;
	case(4): printf("It was a Thursday\n");
		break;
	case(5):printf("It was a Friday\n");
		break;
	case(6): printf("It was Saturday\n");

    }
}
void option2(double p ,double i, double y){
	double result=p*pow(i+1,y);
	printf(" The principal after the given time is now, %lf\n", result);
}
void option3(double p, double i, double y){
	
	printf("the principal after the given time is now, %lf\n", p*(1+(i*y)));
}
