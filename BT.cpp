#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* left;
	struct node* right;
};
struct node* createNode(int data){
	struct node* node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return node;
}
void traversepreorder(struct node* root){
	if(root==NULL){
		return;
	}
	printf("%d ",root->data);
	traversepreorder(root->left);
	traversepreorder(root->right);
}
void postorder(struct node *root){
	if(root==NULL){
		return;
	}
	postorder(root->left);
	postorder(root->right);
	printf("%d ",root->data);
}
void inorder(struct node *root){
	if(root==NULL){
		return;
	}
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);
}
int main(){
	struct node* root = createNode(36);  
    root->left = createNode(26);  
    root->right = createNode(46);  
    root->left->left = createNode(21);  
    root->left->right = createNode(31);  
    root->left->left->left = createNode(11);  
    root->left->left->right = createNode(24);  
    root->right->left = createNode(41);  
    root->right->right = createNode(56);  
    root->right->right->left = createNode(51);  
    root->right->right->right = createNode(66);  
    traversepreorder(root);
    printf("\n");
    postorder(root);
    printf("\n");
    inorder(root);
}
