#include<stdlib.h>
#include<stdio.h>
int main(){
	int n,a;
	int c=1;
	scanf("%d %d",&n,&a);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(c%a==0){
				printf("* ");
			}
			else{
				printf("%d ",c);
			}
			c++;
		}
		printf("\n");
	}
	
}
