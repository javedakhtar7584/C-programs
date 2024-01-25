#include<stdio.h>
void runningSum(int a[],int len);
void printArray(int a[], int len);
int main(){
     int arr[]={2,5,7,3,8,4};
      int len= sizeof(arr)/sizeof(arr[0]);
       printArray(arr,len);
        runningSum(arr,len);
        printArray(arr,len);
        return 0;
}


void runningSum(int a[], int len){
     for(int i=1; i<len; i++){
               a[i]=a[i]+a[i-1];
           }
  }

void printArray(int a[], int len){
    for(int i=0; i<len; i++){
          printf("%d ",a[i]);
       }
    printf("\n");
}
