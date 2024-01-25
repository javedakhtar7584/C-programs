/*#include<stdio.h>
int main(){
	struct student{int age; char name[20];}stu={20,"mohan singh"};
	printf("%d\n",stu.age);
	printf("%s\n",stu.name);
	return 0;
}*/


/*
#include<stdio.h>
int main(){
	struct user{
		char gender;
		char* email;
		int age;
	}fbuser;
	printf("%d\n", sizeof(fbuser));
	return 0;
}*/



/*#include<stdio.h>
int main(){
	typedef struct student {
		char* name;
		int age;
		char gender;
	}stu;
	stu *sp;
	stu st;
	struct student st;
	st.name="mukesh";
	st.age=56;
	st.gender='M';
	sp=&st;
	printf("%s\n",sp->name);
	printf("%d\n",sp->age);
	printf("%s\n",st.name);
	return 0;
}*/


#include<stdio.h>
int main(){
	struct student{
		char* name;
		int age;
		char gender;
	}st={"mukesh kumar",20,'M'};

	printf("%s\n",st.name);
	printf("%d\n",st.age);
	printf("%c\n",st.gender);
	return 0;
}
