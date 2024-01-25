/*#include<stdio.h>
int main(){
    int a[]={2,3,5,7,9};
        for(int i=0; i<5; i++){
              printf("%d ",a[i]);
           
         }
      printf("\n");



      for(int i=0; i<5; i++){
          int  sum=sum+a[i];
         printf("%d ",sum);
          
         }
       printf("\n");
 return 0;
 
}*/
   
#include<stdio.h>
int main(){
     int a[]={3,5,7,2,8,9,10};
       int length=sizeof(a)/sizeof(a[0]);
          for(int i=0; i<length; i++){
                  a[i]=a[i]+a[i-1];
            }
          for(int i=0; i<length; i++){
                printf("%d ",a[i]);
            }
          printf("\n");
            return 0;
}
