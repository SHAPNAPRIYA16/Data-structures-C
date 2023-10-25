#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	scanf("%d",&n);
	long long int binary=0;
	int rem,i=1;
	while(n!=0){
		rem=n%2;
		binary+=rem*i;
		n/=2;
		i*=10;
	}
	printf("%lld",binary);
} 
