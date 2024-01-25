/*#include<stdio.h>
int sum(int);
     int sum(int n){
     if(n==1) return 1;
      return n+sum(n-1);
}
int main(){
    int x;
     printf("enter a number\n");
      scanf("%d",&x);
      int k=sum(x);
      printf("sum=%d\n",k);
    return 0;
}*/

/*#include<stdio.h>
int fact(unsigned int n){
       if(n==0||n==1)return 1;
        return n*fact(n-1);
  }

int main(){
    unsigned int n;
    printf("enter a value: ");
     scanf("%u",&n);
      int k=fact(n);
      printf("fact=%u\n",k);
    return 0;
}*/


#include<stdio.h>
    int power(int a, int x){
         if(x==0)return 1;
          if(x==1)return a;
          return a*power(a,x-1);
     
}
/*int main(){
   int a,p,x;
    printf("enter a number a and x ");
    scanf("%d%d",&a,&x);
     p=power(a,x);
     printf("%d raised to power %d is %d\n",a,x,p);
     return 0;
}*/
int main(){
    int k=power(2,4);
     printf("%d\n",k);
return 0;
}
