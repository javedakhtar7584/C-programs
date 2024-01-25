#include<stdio.h>
void bubblesort(int*,int);
void bubblesort(int*a,int len){
	  int temp;
		for(int i=1; i<len; i++){
			for(int j=1; j<len-i+1; j++){
 				if(a[j]<a[j-1]){
					temp =a[j];
					a[j]=a[j-1];
					a[j-1]=temp;
				}
			}
		}
	}

int main(){
   int a[]={4,56,6,7,3,6,8,1,2};
   int len=sizeof(a)/sizeof(a[0]);
	bubblesort(a,len);
	printf("BUBBLE SORT: ");
	for(int i=-0; i<len; i++){
 		printf(" %d ",a[i]);
	}
printf("\n");
return 0;
}

