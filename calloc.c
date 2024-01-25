#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[]){
	int* p=(int*)calloc(10,sizeof(int));
	for(int i=0; i<10; i++){
		printf("%d\n",p[i]);
		p[i]=i*i;
	}
	printf("\n");
	for(int i=0; i<10; i++){
		printf("%d\t",*(p+i));
	}
	printf("\n");
	return 0;
}
