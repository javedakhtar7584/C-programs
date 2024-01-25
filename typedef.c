#include<stdio.h>
//typedef int number;
int main(){
	int x=10;
/*	number y=25;
	printf("x=%d\n",x);
	printf("y=%d\n",y);*/
	static int y;
	y=x;
	printf("x=%d\ty=%d\n",x,y);
	return 0;
}
