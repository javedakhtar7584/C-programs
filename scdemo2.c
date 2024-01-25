#include<stdio.h>
int main(){
    int x=10,y=20,z=30;
    int a=(++x<++y)&&(++y<++z);
    printf("a=%d\n",a);
    printf("x=%d\ty=%d\tz=%d\n",x,y,z);
  return 0;
}
