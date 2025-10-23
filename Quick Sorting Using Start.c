#include<stdio.h>
int QuickSort(int arr[],int start,int end){
	int pivot_index=start;
	int pivot=arr[pivot_index];
	int i,k=start-1;
	for(i=start;i<=end;i++){
		if(arr[i]<pivot){
			k++;
			int temp=arr[i];
			arr[i]=arr[k];
			arr[k]=temp;
		}
	}
	int temp=arr[pivot_index];
	arr[pivot_index]=arr[k+1];
	arr[k+1]=temp;
	return k+1;
}
void Partition(int arr[],int start,int end){
	if(start<end){
		int p=QuickSort(arr,start,end);
		Partition(arr,start,p-1);
		Partition(arr,p+1,end);
	}
}
int main(){
	int n,i;
	printf("Enter Size : ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter Element %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	Partition(arr,0,n-1);
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
