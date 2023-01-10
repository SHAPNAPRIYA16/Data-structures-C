#include<stdio.h>
#include<stdlib.h>
void bubblesort(int a[],int n){
	for(int i=0;i<n-1;i++){//no of passes
	    for(int j=0;j<n-1-i;j++){//for traversing the list
		    if(a[j]>a[j+1]){
			int temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		    }
	   }
   }
}
void printarray(int a[],int n){
   for(int i=0;i<n;i++){
   	printf("%d ",a[i]);
   }
   printf("\n");
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[101];
    for(int i=0;i<n;i++){
    	scanf("%d",&arr[i]);
	}
	bubblesort(arr,n);
	printarray(arr,n);
}
