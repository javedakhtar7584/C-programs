#include<stdio.h>
void asc(int*,int);
void printarray(int*,int);
void selectionsort(int*a , int len){
	int temp,mi;
	for(int i=0; i<len-1; i++){
		mi=i;
		for(int j=i+1; j<len; j++){
			if(a[j]<a[mi])mi=j;
		}
		temp=a[i];
		a[i]=a[mi];
		a[mi]=temp;
	}
}
void printarray(int* a, int len){
	for(int i=0; i<len; i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}

int  main(){
	int a[]={5,7,3,2,8,4};
	int length=sizeof(a)/sizeof(a[0]);
	printarray(a,length);
	selectionsort(a,length);
	printarray(a,length);
	return 0;
}
