#include <stdio.h>
int main (){
	
	int a,b,c,i,j;
	char x[5];
	int y[5];
	scanf("%d %d %d" ,&a,&b,&c);
	if(a>b)
	{
		j=a;
		a=b;
		b=j;
	}
	if(a>c)
	{
		j=a;
		a=c;
		c=j;
	}
	if(b>c)
	{
		j=b;
		b=c;
		c=j;
	}
	scanf("%s",&x);
	
	for(i=0;i<3;i++)
	{
		if(x[i] == 'A')
			y[i] = a;
		else if(x[i] == 'B')
			y[i] = b;
		else if(x[i] == 'C')
			y[i] = c;
	}
	
	for(i=0;i<3;i++)
	{
		printf("%d ",y[i]);
	}
	return 0;
}
