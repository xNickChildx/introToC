
#include<stdio.h>
int main(){
	int a,b,c,d;
	printf("enter two numbers to be divided:   ");
	scanf("%d",&a);
	scanf("%d",&b);
	c=a/b;
	d=a%b;
	printf("\n %d divided by %d is %d witha remainder of %d\n",a,b,c,d);
	return 0;
}
