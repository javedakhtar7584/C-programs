/*#include<stdio.h>
#include<string.h>
int main(){
//	char* str="lucknow";
	char str[]="lucknow";
	int len=strlen(str);
	printf("%d\n",len);
	return 0;
}*/


#include<stdio.h>
#include<string.h>
int main(){
	char str[]="lucknow";
	int i=0,j=strlen(str)-1;
	char temp;
	while(i<j){
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
	printf("%s\n",str);
	return 0;
}

































































