#include<stdio.h>
void pivot(int*, int);
void printarray(int*,int);
void pivot(int* a,int len){
	int p=0;
	int i=1,j=len-1;
	int temp;
	while(i<=j){
		while(i<=j && a[i]<=a[p])i++;
		while(i<=j && a[j]>a[p])j--;
		if(i<=j){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	temp=a[p];
	a[p]=a[j];
	a[j]=temp;
}





void printarray(int *a,int len){
	for(int i=0; i<len; i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}

int main(){
	int a[]={5,7,2,8,1,4};
	int len=sizeof(a)/sizeof(a[0]);
	printarray(a,len);
	pivot(a,len);
	printarray(a,len);
	return 0;
}
