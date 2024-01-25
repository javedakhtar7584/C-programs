/*#include<stdio.h>
int main(){
	char name[]="manmohan singh";
	char* city="lucknow";
	printf("%c\n",name[4]);
	printf("%c\n",city[4]);
//	return 0;
	name[4]='i';
	printf("%s\n",name);
//	*(city+4)='t';       error in this  in line...
	city="kanpur";
	printf("%s\n",city);
	return 0;

}*/

#include<stdio.h>
int main(){
	char name[]="manmohan singh";
	char ch; int i=0;
	while((ch=name[i])!='\0'){
		i++;
	}
	printf("length of string = %d\n",i);
	return 0;
}
