#include<stdio.h>
int main(){
     int td[3][4];
     int rows= sizeof(td)/sizeof(td[0]);
     int cols= sizeof(td[0])/sizeof(*td[0]);
     printf("rows=%d\n",rows);
    printf("cols=%d\n",cols);
    return 0;
}

