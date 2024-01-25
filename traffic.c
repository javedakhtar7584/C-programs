#include <stdio.h>
int main(){
 char colour;
      printf("Enter the colour of the light (R,G,Y): ");
        scanf("%c", &colour);
    switch(colour){
        case'R':
         case'r':
               printf("STOp\n");
            break;

       case'Y':
       case'y':
            printf("WAIT\n");
              break;
       case'G':
       case'g':
            printf("GO\n");
                 break;
        default:
            printf("The colour is not valid \n");
      }
   return 0;
}


