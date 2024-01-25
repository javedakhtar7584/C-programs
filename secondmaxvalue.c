#include<stdio.h>
int main(){
      int a[]={3,5,6,8,4,12,16,10,1,2,};
    int length=sizeof(a)/sizeof(a[0]);
       int max=a[0];
       int smax=a[0];
     for(int i=0; i<length; i++){
          if(a[i]>max){
            smax=max;
             max=a[i];
         }else if(a[i]>smax){
               smax=a[i];
           }
     }
   printf("second maximum= %d\n",smax);
  return 0;
}
