#include<stdio.h>
int main(){
	unsigned   int  x;
 	unsigned int unity=1;
  	printf("enter a number\n");
  	scanf("%u",&x);
  	if((x & unity)==0){
     		printf("entred value is even\n");
  	}else{
       		printf("enterd value is odd\n");
	}
	return 0;
}
