#include<stdio.h>
void printer(int);
int main(){
       void(*fp)(int);
       fp=&printer;
       fp=printer;
       fp(2);
      return 0;
  }
void printer(int x){
printf("%d\n",x);
}
