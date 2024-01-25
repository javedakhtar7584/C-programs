/*#include<stdio.h>
#include<string.h>
int main(){
	char str[]="kanpur";
	printf("%s\n",str);
	for(int i=0; i<strlen(str); i++){
		str[i]=str[i]-32;
	}
	printf("%s\n",str);
	return 0;
}*/

#include<stdio.h>
#include<string.h>
int main(){
	char name[]="MANOZ";
	for(int i=0; i<strlen(name); i++){
		name[i]=name[i]^32;
	}
	printf("%s\n",name);
	return 0;
}

