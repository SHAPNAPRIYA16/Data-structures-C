#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	scanf("%d\n",&n);
	int arr[1001];
	for(int i=0;i<n;i++){
		scanf("%d ",&arr[i]);
	}
	int in=0;
	int flag=0;
	int temp[1001];
	int index=0;
	for(int i=0;i<n;i++){
		int count=0;
		while(arr[in++]>0){
			int rem=arr[i]%10;
			count++;
			arr[i]=arr[i]/10;
		}
		temp[index++]=count;
	}
	for(int i=1;i<index-1;i++){
		if((temp[i-1]==2 || temp[i-1]==3 )&&(temp[i+1]==2 || temp[i+1]==3)){
			flag=1;
			printf("%d ",arr[i]);
		}
	}
	if(flag==0){
		printf("-1");
	}
	
}
