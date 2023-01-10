#include<stdio.h>
#include<stdlib.h>
int main(){
	int arr[101]={1,3,5,6,8,9,3,5,7};
	int *p;
	p=arr;
    // cannot decalre *p=arr  (It gives error)
    printf("%d ",arr);  // The name of the array contains the base address of the array.
    printf("%d ",arr+1);
    printf("%d ",arr+2);
    printf("%d ",arr+3);
    printf("%d ",arr+4);
    printf("%d ",arr+5);
    printf("%d ",arr+6);
	printf("%d",*(arr+2));
	printf("\n");
	for(int i=0;i<9;i++){
		printf("%d ",i[arr]); //arr[i]=*(arr+i)=*(i+arr)=i[arr]
		}
	printf("\n");
	for(int i=0;i<9;i++){
		printf("%d ",*(p+i));
	}
}
