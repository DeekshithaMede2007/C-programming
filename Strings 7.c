#include<stdio.h>
int main(){
	int arr[2];
	int i;
	for(i=0;i<2;i++){
		scanf("%d ",&arr[i]);
	}
	printf("%d\n",arr[0]);
	printf("%d\n",arr[1]);
	printf("========\n");
	for(i=0;i<2;i++){
		printf("%p\n	",arr[i]);
	}
	return 0;
}
