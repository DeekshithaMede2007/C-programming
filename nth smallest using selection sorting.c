#include<stdio.h>
int main(){
	int n,i,j,min_index;
	printf("Enter Array size- ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter Element-%d = ",i+1);
		scanf("%d",&arr[i]);
	}
	int nthsmallest=0;
	printf("Enter the smallest element you want : ");
	scanf("%d",&nthsmallest);
	for(i=0;i<nthsmallest;i++){
		min_index=i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[min_index]){
				min_index=j;
			}
		}
		int temp=arr[min_index];
		arr[min_index]=arr[i];
		arr[i]=temp;
	}
	printf("Answer is : %d",arr[nthsmallest-1]);
	return 0;
}
