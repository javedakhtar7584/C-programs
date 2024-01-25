//#include<stdio.h>
//void printarray(int*, int);
int linearsearch (int*a,int len, int key){
	for(int i=0; i<len; i++){
		if(a[i]==key)return i;
         	}
	return -1;
}



int main(){
int a[]={5,2,8,9,4,15};
int length=sizeof(a)/sizeof(a[0]);
	for(int i=0; i<len; i++){
		printarray(a,len);
	 	printsearch(a,len);
		printarray(a,len);
	}
return 0;
}
