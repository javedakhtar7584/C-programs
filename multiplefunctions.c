#include<stdio.h>
int add(int,int);
int main(){
    int x=10,y=15;
    int z = add(x,y);
    printf("z=%d\n",z);
return 0;
}

int add(int a,int b){
int c;
c=a+b;
return c;
}
