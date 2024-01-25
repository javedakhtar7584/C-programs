/*#include<stdio.h>
int main(){
	const int x=10;
	printf("%d\n",x);
//	x=15;
	printf("x=%d\n",x);
	return 0;
}*/

/*#include<stdio.h>
int main(){
	 int x=10,y=25;
	int* const p=&x;
	*p=20;
	printf("x=%d\n",x);
	x=30;
	printf("x=%d\n",x);
//	p=&y;
//	printf("y=%d\n",*p);
	return 0;
}*/


/*#include<stdio.h>
int main(){
	const int x=10;
	int* const p=&x;
	*p=20;
	printf("x=%d\n",x);
	return 0;
}*/

#include<stdio.h>
int  main(){
	int x=10;
	const  int y=20;
	const int* const p=&x;
	printf("x=%d\n",*p);
//	*p=15;
	x=25;
	printf("x=%d\n",*p);
	printf("x=%d\n",x);
//	p=&y;
//	y=15;
//	*p=15;
	printf("y=%d\n",*p);
	printf("y=%d\n",y);
	return 0;
}
