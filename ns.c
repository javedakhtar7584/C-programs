/*#include<stdio.h>
int main(){
     int x,y,z;
      printf("enter a value\n");
      scanf("%d%d%d",&x,&y,&z);

      if(x>y){
            printf("x<y\n");
       }else  if (x>y){
               printf("x>y\n");
          }else   if(y>z){
                     printf("x<y\n");
               }else{
               printf("no match found there is technical error\n");

                }
      return 0;
}*/


#include<stdio.h>
int main(){
      int x,y;
      printf("enter your value");
       scanf("%d%d",&x,&y);
       switch(x<y,x>y){
                case 1:
                printf("case 1\n x is smaller than y\n");
                break;
                case 2:
                printf("case 2\n y is greater than x\n");
            default:
                 printf("both number are equal\n");
                 break;
               }
      return 0;
  }

      




