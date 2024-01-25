#include<stdio.h>
extern int age; 
int main(){
	age=50;
	int sal=2000;
	printf("salary=%d\n",sal);
	printer(20);
	printf("age=%d\n",age);
	return 0;
}
