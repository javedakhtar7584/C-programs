#include<stdio.h>
int maxvalue(int a[],int len);
 int main(){
           int a[]={2,5,8,7,9,15,12};
           int b[]={1,3,9,8,7,6,5};
            int lena=sizeof(a)/sizeof(a[0]);
            int lenb= sizeof(b)/sizeof(b[0]);
           int maxA=maxvalue(a,lena);
            int maxB=maxvalue(b,lenb);
           printf("max value in a[] is %d\n",maxA);
            printf("max value in b[] is %d\n",maxB);
            return 0;
   }

int maxvalue(int a[], int len){
       int max=a[0];
        for(int i=1; i<len; i++){
              if(a[i]>max)max=a[i];
        }
return max;
}
