#include<stdio.h>
int main(){
     int td[3][4]={{1,3,5,7},{2,4,6,8},{10,20,30,40}};
      // int k=td[1][2];
      //   td[2][1]=25;
  //       for(int i=0; i<3; i++){
    //         for(int j=0; j<4; j++){

        //     printf("%d ",td[i][j]);
             printf("%d\n",**td);
             printf("%d\n",*(*(td+1)+2));
             printf("%d\n",*(*(td+2)+1));
//            }
  //    printf("\n");
// }
return 0;
}
