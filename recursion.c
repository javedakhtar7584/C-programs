/*#include<stdio.h>
void caller();
int main(){
       printf("hello main\n");
        caller();
        return 0;
}
void caller(){
      main();
}*/


         /* head recurion indirectly*/
#include<stdio.h>
int main(){
     main();
     printf("hello main\n");
      return 0;
}
