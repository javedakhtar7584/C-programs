#include<stdio.h>
int main(){
    int n;
     printf("enter term no: ");
       scanf("%d ",&n);
      for(int i=1; i<=n; i++){
            printf("%d ",fib(i));
         }
       printf("\n");
        return 0;
}

int fib(int n){
     fibterms[0]=1; fibterms[1]=1;
       if(n==1||n==2)return fibterms[1];
          if(fibterms[n-2]!=0 & fibterms[n-3]!=0){
           fibterms[n-1]=fiberms[n-2]+fibterms[n-3];
          return fibterms[n-1]; 
        }
      for(int i=3; i<=n; i++){
               fibterms[i-1]=fibterms[i-3]+fibterms[i-2];
         }
      return fibterms[n-1];
}
