#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int n,i;
	scanf("%d\n",&n);
	int *arr;
	arr=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d ",&arr[i]);
	}
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	n=10;
	arr=(int*)realloc(arr,n*sizeof(int));
	for(i=0;i<n;i++){
		printf("\n%d ",arr[i]);
	}
	free(arr);
}
