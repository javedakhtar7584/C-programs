#include<stdio.h>
int main(){
     int x=10;
     int y=12;
     int z=x^y;
      int count=0;
          while(z!=0){
                  count++;
               z=z&(z-1);
          }
     printf(" hamming distance= %d\n",count);
  return 0;
}
