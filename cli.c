#include<stdio.h>
int main(int argv, char** argv)
//	if(argc==1){
//		printf("Arguments not passed\n");
//		return 0;
//	}
//	for(int i=1; i<argc; i++){
//		printf("%s\n",argv[i]);
//	}
	int i=1;
	while(argv[i]!=	NULL){
		printf("%s\n",argv[i]);

		i++;
	}

