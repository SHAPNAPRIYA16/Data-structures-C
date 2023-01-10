#include<stdio.h>
#include<stdlib.h>
 int main(){
 	int arr[50];
	int n,pos,num;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d ",&arr[i]);
	}
	scanf("%d %d",&pos,&num);
	if(pos<=0 || pos>n){
		printf("Invalid input");
	}
	else{
		for(int i=n-1;i>=pos-1;i--){
			arr[i+1]=arr[i];
		}
		arr[pos-1]=num;
		n++;
	}
	for (int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	 
	 
	 
	  }
