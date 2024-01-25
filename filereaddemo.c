#include<stdio.h>
int main(int argc, char* argv[]){
	int data;
		FILE* fp=fopen("abc.txt","r");
		FILE* fp2=fopen("bbc.txt","a");
		if(fp==NULL || fp2==NULL){
			printf("could not open file\n");
			return 0;
		}
		while((data=getc(fp))!=-1){
			//printf("%c",(char)data);
			fputc(data,fp2);
		}
		fclose(fp);
		fclose(fp2);
		return 0;
}
