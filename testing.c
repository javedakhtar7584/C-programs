#include<stdio.h>
int main(){
      int x=10,y=20,z=30;
      if(x>y){
            printf("x>y\n");
      }else{
           if(y>z){
                 printf("y>z\n");
           }else{
                if(x<y){
                       printf("x<y\n");
                }else{
                      printf("no match found\n");

                 }
            }
}
  return 0;
}
