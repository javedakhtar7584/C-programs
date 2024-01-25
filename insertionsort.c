#include<stdio.h>
void asc(int*,int);
void printarray(int*,int);
void insertionsort(int* a,int len){
	int i=1,j,temp;
	while(i<len){
		j=i-1;
		temp=a[i];
			while(j>=0 && a[j]>temp){
				a[j+1]=a[j];
				j--;
			}
			a[j+1]=temp;
			i++;
	}
}

void printarray(int* a,int len){
	for(int i=0; i<len; i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}



int main(){
	int a[]={5,7,2,8,1,4};
	int len=sizeof(a)/sizeof(a[0]);
	printarray(a,len);
	insertionsort(a,len);
 	printarray(a,len);
	return 0;
}
