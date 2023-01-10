#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	int count=0,flag=0;
	scanf("%d",&n);
	for(int i=n+1; ;i++){//there is no end limit
	if(i<=1){
		continue;
	}
	for(int j=2;j<=i/2;j++){//i/2 because it reduces the number of loop
		if(i%j==0){
			flag=1;
			break;
		}
	}
    if(flag==0){
	    printf("%d ",i);
	    count++;
	    if(count==3){
		   return 0;
	}
}
flag=0;// it should be made 0 so that again it start reading when number is present
}
}
	

