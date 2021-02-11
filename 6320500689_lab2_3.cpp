#include <stdio.h>
int main (){
	
	int a,b,c,i,j;
	char x[5];
	int y[5];
	scanf("%d %d %d",&a,&b,&c);
	if(i < 3-1 && y[i] > y[i+1])
        {
            j = y[i+1];
            y[i+1] = y[i];
            y[i] = j;
            i = 0;
        }
        else
        {
            i++;
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
