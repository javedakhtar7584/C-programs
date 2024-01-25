/*#include<stdio.h>
int main(){
    int x=23,y=34,a,b;
    a=x++;
    b=y++;
    printf("x=%d\ta=%d\n",x,a);
    printf("y=%d\tb=%d\n",y,b);
    return 0;
}*/

/*#include<stdio.h>
int main(){
    unsigned a=10;
    printf("x=%u",a);
    return 0;
}*/


#include<stdio.h>
int main(){
    unsigned  int x;
    unsigned int unity=1;
    printf("enter your value:");
    scanf("%d",&x);
    if((x & unity)==0){
             printf("the value entered is even\n");
    }else{
            printf("the value entered is odd\n");
    }
    return 0;
}
