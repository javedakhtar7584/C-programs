/*#include<stdio.h>
#include<string.h>
int main(){
	char str[]="aaabccccaabbbbb";
	char current=str[0];
	int count=1;
	for(int i=1; str[i]!='\0'; i++){
		if(str[i]==current){
			count++;
		}else{
			printf("%c%d\n",current,count);
			current=str[i];
			count =1;
		}
	}
	printf("%c%d\n",current,count);
	return 0;
}*/

#include<stdio.h>
#include<string.h>
int main(){
	char* str="aaabcccccddaabb";
	int len=strlen(str);	int count=1;
	if(len==1){
		printf("%c%d",str[0],count);
	}
	for(int i=1; i<len; i++){
		if(str[i]==str[i-1]){
			count++;
		}else{
			printf("%c%d",str[i-1],count);
		}
	}
	printf("%c%d\n",str[len-1],count);
	return 0;
}






































