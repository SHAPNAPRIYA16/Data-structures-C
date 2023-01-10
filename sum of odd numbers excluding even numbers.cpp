   //ZOHO INTERVIEW QUESTION 
//Print the sum of digits in array (exclude the digit which is odd and the previous digit is even digit)


#include<stdio.h> 
#include<stdlib.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[1001];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int sum=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]%2!=0 && arr[i-1]%2==0){
			continue;
		}
		else{
			sum=sum+arr[i];
		}
	}
	printf("%d",sum);
}
