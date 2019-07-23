//Nick Child
//6/9/2019
//program 5


#include<stdio.h>
//ask, get, and return an integer (by reference)
//ASSUME THE USER WILL ENETER A NUMBER GREATER THAN OR EQUAL TO 1
void GetIntPointer(int *num);
//input: the number entered by the user (pass by copy)
//output: (product of squares and sum of squares (pass by reference)
void Calculations(int num, double *product, int *sum);
int main(){
//declare 2 integer variables (num,sum)
int num,sum=0;
//declare one double variable (product)
double product=1;
//use the function GetIntPointer to get a number from the user
GetIntPointer(&num);

//print the number onto the screen
printf("You have entered the number %d I will now calculate the product of squares and sum of squares\n", num);

//Use the function Calculations to make calcualte the sum and product
Calculations(num, &product, &sum);
//print the results onto the screen
printf("The product of squares for the number %d is %lf \n The sum of squares is %d\nThank you come again soon\n",num,product,sum);

return 0;
}
void GetIntPointer(int *num){
printf("Please enter an integer larger than zero");
scanf("%d",num);
}
void Calculations(int num, double *product, int *sum){
for(int i=1;i<=num;i++){
	*product=(i*i)**product;
}
int w=num;
while(w>=0){
	*sum=*sum+(w*w);
	w--;
}
}
