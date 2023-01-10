#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[1001];
	int flag=0,index=0;
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int max=0;
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
			index=i;
		}
	}
	for(int j=0;j<n;j++){
		if(j!=index){
			if(arr[j]*2<=max){
				flag=1;
			}
			else{
				flag=0;
				
			}
		}
	}
	if(flag==1){
		printf("%d",index);
	}
	else{
		printf("-1");
	}
}
