#include<stdio.h>
int main(){
        int a[]={3,4,5,7,8,15,9,4,1};
         int length=sizeof(a)/sizeof(a[0]);
          int max=a[0];
        for(int i=0; i<length; i++){
                  if(max<a[i]) max=a[i];
          }
        printf("maximum value= %d\n",max);
          return 0;
}

