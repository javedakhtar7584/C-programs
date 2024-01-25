#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
void push(struct node**ta,int);
int pop(struct node** );
int main(int argc, char* argv[]){
	struct node* top=NULL;
	int option,data;
	while(1){
		printf("1.push\n");
		printf("2.pop\n");
		printf("3.exit\n");
		scanf("%d",&option);
		switch(option){
			case 1:
			        printf("enter a pushed data\n");
				scanf("%d",&data);
			       	break;
			case 2:
				data=pop(&top);
				if(data==-1){
					printf("stack is empty");
				}else{
					printf("%d\n",data);
				}
				break;
			case 3:
				return 0;
			default:
				printf("wroong option\n");
		}
	}
	return 0;
}


void push(struct node**ta, int data){
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data;
	temp->next=*ta;
	*ta=temp;

}

int pop(struct node** tp){
	struct node* temp=*tp;
	if(temp==NULL){
	     return-1;
	}
	int data = temp->data;
	*tp=temp->next;
	temp->next=NULL;
	free(temp);
	return data;
}

