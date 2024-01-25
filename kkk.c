#include<stdio.h>
int main(){
	int x=10,y=20,a,b;
	a=x++;
	b=y++;
	printf("%d %d\n",x,a);
	printf("%d %d\n",y,b);
//	int  x=10,y=20;
//	x++;
//	y++;
//	printf("%d %d\n",x,y);
	return 0;
}
