#include<stdio.h>
int fib(int);
int main(){
        int n;
         printf("ennter term no.\n");
         scanf("%d",&n);
     /*     int result=fib(n);
         printf("%d the term is %d\n",n,result);*/
            for(int i=1; i<=n; i++){
                    printf("%d ",fib(i));
             }
           printf("\n");
         return 0;
}
int fib(int n){
    if(n==1||n==2)return 1;
    //  return fib(n-1)+fib(n-2);
        int a=1,b=1,c=0;
        for(int i=3; i<=n; i++){
               c=a+b;
                a=b;
                b=c;
         }
   return c;
}
