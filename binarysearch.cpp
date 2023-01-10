#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,search ;
	int arr[n];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d ",&arr[i]);
	}
	scanf("%d",&search);
	int l=0;
	int r=n-1;
    while(l<=r){
		int mid=(l+r)/2;
		if(search==arr[mid]){
			printf("%d",mid+1);
			break;
		}
		else if(search>arr[mid]){
			l=mid+1;
		}
		else{
		r=mid-1;
		}
	}
	if(l>r)
	printf("Error");
}
// best case=O(log n)
//worst case=O(n)
