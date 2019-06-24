/*Nick Child
 * 06/03/2019
 * COP 2220 second program 
 */

#include <stdio.h>
int main(void){

	int hoursPerDay, minutesPerDay, lifeExpec, totalMins, days, hours, minutes;
	printf("\n\n Hello, this program will decide how much of your life is wasted doing an activity, please think of a daily activity \n\n Please enter the number of hours and minutes spent daily on this activity:   ");
	 scanf("%d%d", &hoursPerDay, &minutesPerDay);
	 printf("How old do you expect to be:  ");
	scanf("%d", &lifeExpec); 
	 printf("Thank you, now calculating...\n\n");

	 
	totalMins= (minutesPerDay+(hoursPerDay*60))*365*lifeExpec;
	minutes= totalMins%60;
	hours=totalMins/60;
	days=hours/24;
	hours=hours%24;

	printf("If a person spends %d hours and %d minutes doing an activity for %d years...\n They will spend %d days %d hours and %d minutes performing this activity over their lifetime!\n\n\n", hoursPerDay, minutesPerDay, lifeExpec, days, hours,minutes);




	return 0;
}

