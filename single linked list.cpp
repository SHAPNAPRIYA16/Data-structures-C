#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};

struct node* createnode(int val){
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	newnode->next=NULL;
	return newnode;
}

void create(struct node** start,int val){
	struct node* newnode=createnode(val);
	newnode->data=val;
	newnode->next=NULL;
	*start=newnode;
}

void insert_at_beg(struct node** start,int val){
	struct node* newnode=createnode(val);
	newnode->data=val;
	newnode->next=*start;
	*start=newnode;
}

void insert_at_end(struct node** start,int val){
	struct node* newnode=createnode(val);
	struct node*ptr=*start;
	while(ptr->next!=NULL){
		ptr=ptr->next;
	}
	ptr->next=newnode;
	
}

void insert_after(struct node** start,int after_val,int val){
	struct node*newnode=createnode(val);
	struct node*ptr,*preptr;
	ptr=*start;
	preptr=*start;
	if(ptr->data==after_val){
		newnode->next=ptr->next;
		ptr->next=newnode;
	}
	else{
	while(preptr->data!=after_val){
		preptr=ptr;
		ptr=ptr->next;
	}
	newnode->next=ptr;
	preptr->next=newnode;
    }
}

void reverse(struct node** start){
	struct node *prev,*next,*curr;
	curr=*start;
	prev=NULL;next=NULL;
	while(curr!=NULL){
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
		//curr->next=prev;
	}
	*start=prev;
}

void get_middle(struct node* start){
	struct node* beg=start;
	struct node*end=start;
	while(end!=NULL && end->next!=NULL){
		beg=beg->next;
		end=end->next->next;
	}
	printf("%d",beg->data);
}

void display(struct node*start){
	struct node*ptr;
	ptr=start;
	while(ptr->next!=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
	printf("%d ",ptr->data);
}

int main(){
	struct node*start = NULL;
	create(&start,10);
	insert_at_beg(&start,20);
	insert_at_end(&start,30);
	insert_after(&start,20,40);
	insert_at_end(&start,100);
	display(start);
	printf("\n");
	get_middle(start);
	printf("\n");
	reverse(&start);
	display(start);
}

