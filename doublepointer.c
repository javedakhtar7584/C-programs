#include<stdio.h>
int main(){
      int x=10;
       int y=20;
      int* p=&x;
      int**dp=&p;
       int***tp=&dp;
    printf("%d\n",x);
  //   printf("%p\n",p);
    // printf("%p\n",dp);
    ***tp=50;
     printf("%d\n",x);
       printf("%d\n",***tp);
    // printf("%d\n",*p);
    // printf("%d\n",**dp);
      **tp = &y;
      printf("%d\n",***tp);

     return 0;
}
