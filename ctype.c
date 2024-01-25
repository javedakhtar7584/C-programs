#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(int argc, char* argv[]){
	char data[50];
	printf("enter a string: ");
	scanf("%[^s\n]",data);
	int len=strlen(data);
	for(int i=0; i<len; i++){
		if(isalpha(data[i]) && islower(data[i])){
			data[i]=(char)toupper(data[i]);
		}
	}
	printf("%s\n",data);
	return 0;
}
