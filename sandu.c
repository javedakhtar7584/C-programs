#include<stdio.h>
int main(){
	struct user{
		char* name;
		int age;
		struct address{
			char* city;
			char* country;
		}adr;
	}*fbuser;
	struct user abc; 
	fbuser=&abc;
	printf("%d\n",(int)sizeof(fbuser));
	fbuser->adr.city="lucknow";
	fbuser->adr.country="india";
	printf("%s\n",fbuser->adr.city);
	return 0;
}
