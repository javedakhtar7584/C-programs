/*#include<stdio.h>
int main(){
    int x =10, y=20, z=30;
     printf("x=%d\ty=%d\t,z=%d\n",x,y,z);
     printf("x=%d\t,y=%d\tz=%d\n",x,y);
     printf("x=%d\ty=%d\n",x,y,z);
return 0;
} */


#include<stdio.h>
int main(){
    int x=10, y=20, z=30;
    printf("%d%d%d\n",x,y,z);
    printf("%4d%5d%3d\n",x,y,z);
   double a=2.35, b=13.275, c=18.1352;
     printf("%5.2f\n",a);
     printf("%5.2f\n",b);
     printf("%5.2f\n",c);
    char* str="lucknow";
    printf("%s\n",str);
    printf("%10s\n",str);
    printf("%10.2s\n",str);
return 0;
}
