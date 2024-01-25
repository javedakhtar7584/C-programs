#include<stdio.h>
int main(){
     unsigned int x;
      printf("enter your value: ");
       scanf("%u",&x);
        int count=0;
        while(x!=0){
            count++;
            x=x&(x-1);
        
          }
          printf("number of one=%d\n",count);
           return 0;
}

/*#include<stdio.h>
int main(){
   unsigned int x;
       printf("enter your value:");
        scanf("%u",&x);
        if((x&(x-1))==0){
             printf("number is in power of 2\n");
           }else{
               printf("number is not in poweer of 2\n");
            }
   return 0;
}*/
