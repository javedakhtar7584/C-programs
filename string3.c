/*#include<stdio.h>
#include<string.h>
int main(int argc, char* argv[]){
	char name[]="lucknow";
	char city[]="banpur";
	int x= strcmp(name,city);
	int y= strcmp(city,name);
	printf("%d\n",x);
	printf("%d\n",y);
	return 0;
}*/


/*#include<stdio.h>
#include<string.h>
int main(int argc,char* argv[]){
	char name[]="lucknow junction";
	char* p = strrchr(name,'n');
	if(p==NULL){
		printf("not found\n");
	}else{
		printf("%s\n",p);
	}
	return 0;
}*/

#include<stdio.h>
#include<string.h>
int main(int argc, char* argv[]){
	char* s1= "lucknow junction";
	char* s2="luc";
	char* p=strstr(s1,s2);
	if(p==NULL){
		printf("not found\n");
	}else{
		printf("%s\n",p);
	}
	return 0;
}
