#include <stdio.h>
int main (){
	
	int x=1,i,m=92;
	char n[7][7]= {"(^_^)","{@_@}","(*o*)","{*v*}","(T_T)","{x_x}"};
	char y ='A';
	
	if(y>='A' && y<='Z')
	{
		scanf("%c",&y);
	}
		
	if(x>=1 && x<=31)
	{
		scanf("%d",&x);
	}
		
	if(y>='A' && y<='I')
	{
		if(x%2 == 0)
			i = 1;
		else
			i = 0;
	}
	
	else if(y>='J' && y<='R')
	{
		if(x%2 == 0)
			i = 3;
		else
			i = 2;
	}
		
	else if(y>='S' && y<='Z')
	{
		if(x%2 == 0)
			i = 5;
		else
			i = 4;
	}
		
	if(x%10 == 5)
	{
		printf("%c%s/",m,n[i]);
	}
		
	else
		printf("%s",n[i]);
	return 0;
}
