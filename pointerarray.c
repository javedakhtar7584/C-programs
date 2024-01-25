/*#include<stdio.h>
int main(){
   int x=10;
   int*k=&x;
   printf("%d\n",x);
   printf("%d\n",*k);
   *k=20; 
   printf("%d\n",x);
    return 0;
}*/

/*#include<stdio.h>
int main(){
   int x=10;
   int k=&x;
   int* p=&x;
    printf("k=%x\n",k);
    printf("p=%p\n",p);
   k++;
   p++;
   printf("k=%x\n",k);
   printf("p=%p\n",p);
  return 0;
}*/

/*#include<stdio.h>
int main(){
    // int x=10;
    // int *p=&x;
     char x='A';
     char* p=&x;
     printf("%d\n",(int)sizeof(x));
     printf("%d\n",(int)sizeof(p));
     return 0;
}*/



#include<stdio.h>
void printArray(int* , int);
int main(){
     int a[]={2,3,5,7,9};
     int length=sizeof(a)/sizeof(a[0]);
      printArray(a,length);
     return 0;
}


void printArray(int*a,int length){
     for(int i=0; i<length; i++){
         printf("%d",a[i]);
       }
    printf("\n");
}



















