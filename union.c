#include<stdio.h>
int main(){
	union student{
		char* name;
		int age;
	}stu;
	printf("%d\n",(int)sizeof(union student));
	printf("%d\n",(int)sizeof(stu));
	stu.name="mohan singh";
	printf("%s\n",stu.name);
	stu.age=20;
	printf("%d\n",stu.age);
	printf("%d\n",stu.name);
	return 0;
}
