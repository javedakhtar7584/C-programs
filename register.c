#include<stdio.h>
int main(){
	register int x=10;
	int* p=&x;
	printf("%d\n",x);
	return 0;
}
