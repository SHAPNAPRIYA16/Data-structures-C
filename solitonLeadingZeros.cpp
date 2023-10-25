#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int count=0;
    while(n>0){
    	if(n%2==0){
    		++count;
		}
		else if(n%2==1){
			count++;
			break;
		}
		n=n/10;
}
printf("%d",32-count);
}
