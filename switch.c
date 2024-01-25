#include<stdio.h>
int main(){
      int x;
      printf("enter a number\n");
      scanf("%d",&x);
      switch(x){
               default:
                   printf("default case\n");
                    break;
                case 10&2:
                    printf("case 3\n");
                     break;
                case 10^2:
                     printf("case 1\n");
                break;
                case 10|3:
                      printf("case 2\n");
                      break;
        }
  return 0;
}
