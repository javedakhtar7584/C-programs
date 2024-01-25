#include<stdio.h>
int main(){
   unsigned char a=10;
   unsigned char b=12;
   unsigned char c=a&b;
   printf("c=%u\n",c);
    c=a|b;
    printf("c=%u\n",c);
   c= a^b;
   printf("c=%u\n",c);
   return 0;
}
