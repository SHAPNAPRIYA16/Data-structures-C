#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *top=NULL;
void push(int n){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=n;
	newnode->next=top;
	top=newnode;
}
void display(){
	struct node *temp;
	temp=top;
	if(top==0){
		printf("UnderFlow");
	}
	else{
		while(temp!=NULL){
			printf("%d ",temp->data);
			temp=temp->next;
		}
		printf("\n");
	}
}
void peek(){
	if(top==NULL){
		printf("UnderFlow");
	}
	else{
		printf("%d\n",top->data);
	}
}
void pop(){
	struct node *temp;
	temp=top;
	if(top==NULL){
		printf("UnderFlow");
	}
	else{
		printf("%d\n",top->data);
		top=top->next;
		free(temp);
	}
}
int main(){
	push(3);
	push(5);
	push(19);
	push(89);
	peek();
	display();
	pop();
	display();
		
	
}
