#include<stdio.h>
void printarray(int a[]);
int main(){
     int a[]={2,3,7,9,8,15};
     int len=sizeof(a)/sizeof(a[0]);
     printarray(a);
    return 0;
}

void printarray(int a[]){
     int length=sizeof(a)/sizeof(a[0]);
      for(int i=0; i<length; i++){
                printf("%d ",a[i]);
      }
printf("\n");
}
