#include<stdio.h>
#include<string.h>
int main() {
	
	unsigned int x=0;
	char y[10][10]= {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
	int c[20];
	int i,j;
	
	if (x>=0 && x<=10000000);
		scanf("%d",&x);
		
	for (i=0;x>0;i++)
	{
		c[i]= x%10;
		x= x/10;
	}
	
	for (i--;i>=0;i--)
	{
		for (j=0;j<10;j++)
			if (c[i]==j)
			{
				printf("%s",y[j]);
			}
			if (i!=0)
			{
				printf("-");
			}
	}
	return 0;
}
