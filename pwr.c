#include<stdio.h>
int main(){
        int x;
         int count=0;
          printf("Enter your value: ");
           scanf("%d",&x);
         while(x!=0){
                // count++;
              if((x&1)==1)break;
                 count++;
              x=x>>1;
          }
              if((count & 1)==0){
                  printf("number is in power of 4\n");
             }else{
           printf("number is not  in power of 4\n");
         }

   return 0;
}
