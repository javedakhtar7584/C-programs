#include<stdio.h>
void printarray(int*,int);
void merge(()int*,int,int,int);

void mergesort(int*,int,int);

int main(){
	int a[]={5,2,8,9,7,6,18,10,12};
	int len=sizeof(a)/sizeof(a[0]);
	printarray(a,len);
	mergesort(a,0,len-1);
	printarray(a,len);
	return 0;
}
	void printarray(int*a,int len){
	for(int i=0; i<len; i++){
		printf("%d ",a[i]);
	}



void merge(int*a, int si, int mid, int li){
	int left[mid-si];    int ll=sizeof(left)/sizeof(left[0]);
	int right[li-mid+1];   int lr=sizeof(right)/sizeof(right(a));
	for(int i=si; i<mid; i++){
		left[i-si]=a[i];
	}
	for(i=mid; i<=li; i++){
		right[i-mid]=a[i];
	}
	int i=0,j=0,k=0;
	while(i<ll && j<lr){
		if(left[i]<=right[j]){
			a[k++]=left[i++];
               }else{
			a[k++]=right[j++];
		}
	}
	while(i<ll)a[k++]=left[j++];
	while(j<lr)a[k++]=right[j++];
}


}
