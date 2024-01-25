#include<stdio.h>
int main(){
     int secondrydiagonal(int td[][4],int rows,int cols){
         int sum=0;
        for(int i=0; i<rows; i++){
             for(int j=0; j<cols; j++){
                       if((i+j)==(rows-1)){
                           sum+=td[i][j];
                         }
                }
        }
  return sum;
}
