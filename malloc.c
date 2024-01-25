#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[]){
	int*p=(int*)malloc(4);
	int*q=(int*)malloc(sizeof(int));
	printf("value at p=%d\n",*p);
	printf("value at q=%d\n",*q);
	*p=10;
	*q=20;
	printf("value at p=%d\n",*p);
	printf("value at q=%d\n",*q);
	return 0;
}
