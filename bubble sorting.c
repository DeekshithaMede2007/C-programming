#include<stdio.h>
int main(){
	int n;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	int i,j,count=0;
	int arr[n];
	printf("Enter the elements in the array: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int cycle;
	printf("Required No of Cycles: ");
	scanf("%d",&cycle);
	for(j=0;j<n;j++){
		printf("Cycle-%d = ",j+1);
		for(i=0;i<=n-2;i++){
			if(arr[i]>arr[i+1]){
				count++;
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
		for(i=0;i<n;i++){
			printf("%d ",arr[i]);
		}
		printf("\n");
	}
	printf("Sorted Array = ");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\nCount = %d",count);
	return 0;
}
