
#include<stdio.h>
int main(int argc, char* argv[]){
	FILE* fp=fopen("copy.txt","w");
	if(fp==NULL){
		printf("could not open file\n");
		return 0;
	}
	int data;
	while((data=getchar())!='#'){
		fputc(data,fp);
	}
	fclose(fp);
	return 0;
}
