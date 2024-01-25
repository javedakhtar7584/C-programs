#include<stdio.h>
#define PI 3.14
 int main(){
   double ft =PI;
   printf("%f\n",ft);
#ifndef PI
   #define PI 7.16
#endif
   double pi = PI;
   printf("%f\n",pi);
  return 0;
}
