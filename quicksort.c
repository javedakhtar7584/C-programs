#include<stdio.h>
void printarray(int*,int);
void swap(int*,int*);
void quicksort(int*,int,int);
int partition(int* a, int low, int high){
	int pivot=low;
	int i=low+1, j=high;
	while(i<=j){
		while(i<=j && a[i]<=a[pivot])i++;
		while(i<=j && a[j]>a[pivot])j--;
		if(i<j){
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[pivot],&a[j]);
	return j;
}

void swap(int*a,int*b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void quicksort(int* a, int low, int high){
	if(low<high){
		int pivot=partition(a,low,high);
		quicksort(a,low,pivot-1);
		quicksort(a,pivot+1,high);
	}
}

void printarray(int* a,int len){
	for(int i=0; i<len; i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}

int main(){
	int a[]={2,4,5,10,3,20,11,22};
	int len=sizeof(a)/sizeof(a[0]);
	printarray(a,len);
	quicksort(a,0,len-1);
	printarray(a,len);
	return 0;
}







