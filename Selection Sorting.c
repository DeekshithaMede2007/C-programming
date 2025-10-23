#include<stdio.h>
int main(){
	int n,i,j,max_index;
	printf("Enter Array size- ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter Element-%d = ",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		max_index=0;
		for(j=0;j<n-i;j++){
			if(arr[j]>arr[max_index]){
				max_index=j;
			}
		}
		int temp=arr[max_index];
		arr[max_index]=arr[n-i-1];
		arr[n-i-1]=temp;
	}
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
