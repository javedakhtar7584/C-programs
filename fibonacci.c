#include<stdio.h>
 int main(){
      int  n;
     int first=0, second= 1;
      int third;
       printf("Enter your fibonacci series: ");
        scanf("%d",&n);
         for(int i=1;i<=n;i++){
             printf(" %d  ",first );
                third=first+second;
                 first=second;
                 second=third;
             }
               printf("\n");

    return 0;
}
