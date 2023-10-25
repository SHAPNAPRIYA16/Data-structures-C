#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* left;
	struct node* right;
};
struct node* newnode(int data){
	struct node* node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL:
	node->right=NULL;
}
struct node* insert(struct node* root,int data){
	if(root==NULL){
		return newnode(data);
	}
	else if(data < root->data){
		root->left=insert(root->left,data);
	}
	else{
		root->right=insert(root->right,data);
	}
	return root;
}
struct node* search(struct node* root,int Sdata){
	if(root==NULL){
		return 0;
	}
	else if(root->data==Sdata){
		return 1;
	}
	else if(root->data>Sdata){
		return search(root->right,Sdata);
	}
	else{
		return search(root->left,Sdata);
	}
}
struct node * find_min(struct node * root){
	if(root==NULL){
		return NULL;
	}
	else if(root->left!=NULL){
		find_min(root->left);
	}
	return root;
}
struct node* delete(struct node *root,int data){
	if(root==NULL){
		return NULL;
	}
	else if(root->data < data){
		root->right=delete(root->right,data);
	}
	else if(root->data > data ){
		root->left=delete(root->left,data);
	}
	else {
	   if(root->left==NULL && root->right==NULL){
		free(root);
		return NULL;
      	}
      	else if(root->left==NULL || root->right==NULL){
      		struct node *temp;
      		if(root->left==NULL){
      			temp=root->right;
			  }
			  if(root->right==NULL){
			  	temp=root->left;
			  }
			  return temp;
		  }
		
   }
	
}
