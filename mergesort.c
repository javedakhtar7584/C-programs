#include<stdio.h>
void printarray(int *,int);
void mergewithin(int* a, int len){
	int i=1,j,k,temp;
	for(j=1;j<len;j++){
		if(a[j]<a[j-1])break;
	}
	while(i<j){
		if(a[j]<a[i]){
			temp=a[j];
			k=j;
			while(k>i){
				a[k]=a[k-1];
				k--;
			}
			a[i]=temp;
			j++;
		}
		i++;
	}

 }

int main(){
	int a[]={2,4,6,10,3,7,9,15};
	int len=sizeof(a)/sizeof(a[0]);
	printarray(a,len);
	mergewithin(a,len);
	printarray(a,len);
	return 0;
}

void printarray(int* a, int len){
	for(int i=0; i<len; i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
