#include<stdio.h>
int x=10;
void printer(){
	int x=20;
	printf("%d\n",x);
}

int main(){
	printf("%d\n",x);
	printer();
	return 0;
}
