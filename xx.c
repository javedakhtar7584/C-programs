#include<stdio.h>
int main(){
     int x,y;
     printf("enter your value");
     scanf("%d%d",&x,&y);
     if(x<y){
          printf("x is smaller\n");
     }else if(x>y){
               printf("y is smaller\n");
     }else{
         printf("your code is error\n");
      }
 return 0;
}

