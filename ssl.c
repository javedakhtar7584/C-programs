#include<stdio.h>
#include<stdlib.h>
void traverse();
void createlist();
int countnodes();
void insertnode(int);
void deletenode(int);
void reversenode();
struct node{
	int data;
	struct node *next;
}*head=NULL;

int main(int argc , char* argv[]){
	int option;
	int pos;
	while(1){
		printf("enter an option:\n");
		printf("1: to create linkedlist\n");
		printf("4. insert node\n");
		printf("10: to exit\n");
		scanf("%d",&option);
		switch(option){
			case 1:
				createlist();
				break;
			case 2: traverse();
				break;
			case 3:
				printf("counted node is: %d\n",countnodes());
				break;
			case 4:
				printf("enter position:");
				scanf("%d",&pos);
				insertnode(pos);
				break;
			case 5:
				printf("ennter position: ");
				scanf("%d",&pos);
				deletenode(pos);
				break;
			case 6:
				reversenode();
				break;
			case 10:
				return 0;
			default:
				printf("wrong option\n");
				break;
		}
	}
	return 0;
}

void createlist(){
	int non,data;
	printf("enter number of notes to be created\n");
	scanf("%d",&non);
	for(int i=1; i<=non; i++){
		printf("enter data");
		scanf("%d",&data);
		struct node *temp;
		temp=(struct node*) malloc(sizeof(struct node));
		temp->data=data;
		temp->next=NULL;
		if(i==1){
			head=temp;
		}else{
			struct node *p=head;
			while(p->next!=NULL){
				p=p->next;
			}
			p->next=temp;
		}
	}
}


void traverse(){
	struct node* temp=head;
	while(temp!=NULL){
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("\n");
}


int countnodes(){
	int count=0;
	struct node* temp=head;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	return count;
}


void insertnode(int pos){
	struct node* p=head;
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("entter a data of new node: ");
	scanf("%d",&temp->data);
	if(pos==1){
		temp->next=head;
		head=temp;
	}else{
		int location=1;
		while((p->next!=NULL)&&(location<pos-1)){
			location++;
			p=p->next;
		}
		temp->next=p->next;
		p->next=temp;
	}
}



void deletenode(int pos){
	struct node*p=head;
	if(pos==1){
		head=p->next;
		p->next=NULL;
		free(p);
	}else{
		int count=1;
		struct node*q=head;
		while((p->next!=NULL)&&(count<pos)){
			q=p;
			p=p->next;
			count++;
		}
		if(pos==count){
			q->next=p->next;
			p->next=NULL;
			free(p);
		}else{
			printf("position does not exit\n");
		}
	}
}


void reversenode(){
	struct node*p=head;
	struct node*q=head;
	struct node*r=head;
	if(head==NULL){
		printf("empty list\n");
	}
	p=NULL;
	q=head;
	while(q!=NULL){
		r=q->next;
		q->next=p;
		p=q;
		q=r;
	}
	head=p;
}
