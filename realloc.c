#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[]){
	int* p=(int*)malloc(sizeof(int));
	*p=10;
//	int* q = ((long*) realloc (p,sizeof(long)));
	printf("%d\n",*p);
	free(p);
	printf("%d\t%d\n",*p);
	return 0;
}
