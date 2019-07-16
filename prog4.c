// Nick Child
// 4-3-2019
// Program 4
/* COP 2220 */
// Preprocessor directives

#include <stdio.h>

void order(double* a, double* b, double* c);
void SumOfSquares(double Array[], int n_elements, double *sum_of_squares);
double removeAverage(double Array[], int n_elements);
double variance(double Array[], int n_elements, double* mean);
int main(void){
double a,b,c;
double arr[10];

printf("Hello, please enter three decimal numbers\n");
scanf("%lf %lf %lf",&a, &b, &c);
printf("You have entered %lf, %lf and %lf\n I will now order them\n", a, b,c);
order(&a,&b,&c);
printf("The order is now %lf, %lf, %lf\n", a,b,c);
printf("Please enter 10 numbers:\n");
scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4],&arr[5],&arr[6],&arr[7],&arr[8],&arr[9]);
printf("you have entered ");
for(int i=0; i<10;i++){
	printf("%lf ", arr[i]);
}
printf("\ncalculating mean and average\n");
double mean;
double varianc=variance(arr,10, &mean);
printf("The average is %lf and the variance is %lf\n Have a nice day!\n",mean,varianc);
  return 0;
}
void order(double* a, double* b, double* c){
	double middle;
	double biggest;
	double smallest;
	 if (*a>*b) {
       middle=*a;
      smallest=*b;
   } else {
      middle=*b;
      smallest=*a;
   }
   if (middle>*c) {
      biggest=middle;
      if(smallest>*c){
         middle=smallest;
         smallest=*c;
      }else {
         middle=*c;
      }
   }else biggest=*c;
   *a=smallest;
   *b=middle;
   *c=biggest;

}
void SumOfSquares(double Array[], int n_elements, double *sum_of_squares){
	for(int i=0;i<n_elements; i++){
	*sum_of_squares+=(Array[i]*Array[i]);
	}	
}
double removeAverage(double Array[], int n_elements){
double average=0;
	for(int i=0;i<n_elements;i++){
	average=Array[i]+average;
	}
	average=average/n_elements;
	for(int i=0;i<n_elements;i++){
	Array[i]=Array[i]-average;
	}
	
	return average;
}
double variance(double Array[], int n_elements, double* mean){
*mean=removeAverage(Array,n_elements);
double sumSquares=0;
SumOfSquares(Array,n_elements,&sumSquares);
return sumSquares/(n_elements-1);
}

