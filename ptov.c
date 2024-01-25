#include<stdio.h>
int main(){
	void* vp;
	int x=10;
	char ch='A';
	float f=3.54;
	vp=&f;
	printf("%f\n",*((float*)vp));
	vp=&x;
	printf("%d\n",*((int*)vp));
	return 0;
}
