#include<stdio.h>
void asc(int*,int);
void desc(int*,int);
void sort(void(*fp)(int*,int),int*,int);
void printarray(int*,int);
int main(){
    int a[]={5,3,2,8,7,6,9};
     int len=sizeof(a)/sizeof(a[0]);
      printarray(a,len);
	sort(asc,a,len);
      printarray(a,len);
	sort(desc,a,len);
	printarray(a,len);
	return 0;
}
void sort(void(*fp)(int*,int),int*a,int len){
	fp(a,len);
}

void printarray(int* a,int len){
	for(int i=0; i<len; i++){
             printf(" %d ",a[i]);
   	}
	printf("\n");
}
void asc(int* a,int len){
        int temp; 
   	for(int i=1; i<len; i++){
		for(int j=1; j<len-i+1; j++){
			if(a[j]<a[j-1]){
 				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
	}
}



void desc(int* a, int len){
	int temp;
	for(int i=1; i<len; i++){
		for(int j=1; j<len-i+1; j++){
			if(a[j]>a[j-1]){
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
	}
}








