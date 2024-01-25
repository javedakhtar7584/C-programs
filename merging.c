#include<stdio.h>
void merge(int*,int,int*,int,int*);
void printarray(int*,int);
void merge(int* a,int la,int*b,int lb,int* c){
	int i=0,j=0,k=0;
	while(i<la && j<lb){
		if(a[i]<=b[j]){
			c[k++]=a[i++];
		}else{
			c[k++]=b[j++];
		}
	}
	while(i<la)c[k++]=a[i++];
	while(j<lb)c[k++]=b[j++];
}

void printarray(int* a,int len){
	for(int i=0; i<len; i++){
		printf("%d ",a[i]);
	}
	printf("\n ");
}

int main(){
	int a[]={1,3,7,9,15};
	int b[]={4,10,12,16,18};
	int la=sizeof(a)/sizeof(a[0]);
	int lb=sizeof(b)/sizeof(b[0]);
	int c[la+lb];
	printarray(a,la);
	printarray(b,lb);
	merge(a,la,b,lb,c);
	printarray(c,la+lb);
	return 0;
}



