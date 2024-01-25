#include<stdio.h>
#include"myheader.h"
extern int x;
void show(){
/* 	int x=50;*/
	printf("x=%d\n",x);
}
int main(){
	printf("x=%d\n",x);
	x++;
	show();
	printer();
	return 0;
}
