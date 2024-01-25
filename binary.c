#include<stdio.h>
int binarysearch(int*a,int si, int li, int key){
	if(si<=li){
		int mid=(si+li)/2;
		if(a[mid]==key){
			return mid;
		}else if(a[mid]<key){
			return binarysearch(a,mid+1,li,key);
		}else{
			return binarysearch(a,si,mid-1,key);
         	}
	}else{
		return -1;
	}
}


int main(){
	int a[]={2,3,10,15,17,25,30};
	int len=sizeof(a)/sizeof(a[0]);
	int li,si, key;
	printf("enter your value\n ");
	scanf("%d",&key);
	int result=binarysearch(a,0,len-1,key);
	if(result==-1){
		printf("key is not found\n");
	}else{
		printf("key is found at %d index\n", result);
	}
	return 0;
}
