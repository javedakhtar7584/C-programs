#include<stdio.h>
int main(){
    printf("starting of main\n");
    goto ab;
    printf("after label ab\n");
    ab:
    printf("after goto\n");
    return 0;
}

