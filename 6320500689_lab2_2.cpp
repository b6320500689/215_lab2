#include <stdio.h>
int main (){
	
	int t1,t2;
	char a;
	float z,y=0;
	scanf ("%c",&a);
	scanf ("%f",&z);
	t1 = z;
	t2 = z*100;
	t2 = t2%100;
	
	if (a == 'A'){
		y = y+199;
		if (z>200){
			t1 = t1-200;
			y += t1*3;
			y += t2*3/60.0;
		}
	}
	else if(a=='B'){
        y = y+299;
        if(z>400){
            t1 = t1-400;
            y += t1*2;
            y += t2*2/60.0;
        }
    }
    printf("%.2f",y);
    return 0;
}
