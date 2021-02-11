#include <stdio.h>
int main (){
	
	int a,b,c,x;
	if(a>=0 && a<=30)
		scanf("%d",&a);
	if(b>=0 && b<=30)
		scanf("%d",&b);
	if(a>=0 && b<=30)
		scanf("%d",&c);
	x=a+b+c;
	if(x>=0 && x<=49)
		printf("F");
	else if(x>=50 && x<=54)
		printf("D");
	else if(x>=55 && x<=59)
		printf("D+");
	else if(x>=60 && x<=64)
		printf("C");
	else if(x>=65 && x<=69)
		printf("C+");
	else if(x>=70 && x<=74)
		printf("B");
	else if(x>=75 && x<=79)
		printf("B+");
	else if(x>=80 && x<=100)
		printf("A");
	return 0;
}

