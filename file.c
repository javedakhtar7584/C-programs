/*#include<stdio.h>
int main(){
     for(int i=1;i<10;i*=2){
           printf("%d\n",i);
       }
  return 0;
}*/

#include<stdio.h>
 int main(){
     for(int i=0;i<10;i++){
          if(i<7)continue;
          printf("%d\n",i);
        }
return 0;
}
