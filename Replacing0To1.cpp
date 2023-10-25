#include<stdio.h>
#include<stdlib.h>
int main(){
	long long int n;
	scanf("%lld",&n);
	long long int num=0;
	while(n!=0){
		int rem=n%10;
		if(rem==0){
			rem=1;
		}
		num=num*10+rem;
		n=n/10;
	}
	while(num!=0){
		int re=num%10;
		n=n*10+re;
		num=num/10;
	}
	printf("%lld",n);
}
