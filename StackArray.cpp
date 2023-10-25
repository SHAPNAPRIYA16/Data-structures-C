#include<stdio.h>
#include<stdlib.h>
#define N 5
int stack[N];
int top=-1;
void push(){
	int n;
	scanf("%d",&n);
	if(top==N-1){
		printf("Overflow");
	}
	else{
		top++;
		stack[top]=n;
	}
}
void pop(){
	int item;
	if(top==-1){
		printf("Underflow");
	}
	else{
		item=stack[top];
		top--;
	}
	printf("%d\n",item);
}
void peek(){
	if(top==-1){
		printf("Underflow");
	}
	else{
		printf("%d\n",stack[top]);
	}
}
void display(){
	for(int i=top;i>=0;i--){
		printf("%d ",stack[i]);
	}
	printf("\n");
}
int main(){
	int ch;
	do{
		printf("Enter choice:1.Push 2.Pop 3.Peek 4.Display\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			case 4:
				display();
				break;
			default:
				printf("Invalid choice\n");
		}
	}while(ch!=0);
		
	
}
