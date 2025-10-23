#include<stdio.h>
void radixsort(int arr[],int n,int exp){
	int count[10]={0};
	int i;
	for(i=0;i<n;i++){
		count[(arr[i]/exp)%10]++;
	}
	for(i=0;i<10;i++){
		count[i]+=count[i-1];
	}
	int output[n];
	for(i=n-1;i>=0;i--){
		output[count[(arr[i]/exp)%10]-1]=arr[i];
		count[(arr[i]/exp)%10]--;
	}
	for(i=0;i<n;i++){
		arr[i]=output[i];
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int max=0;
	for(i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	int exp;
	for(exp=1;max/exp>0;exp=exp*10){
		radixsort(arr,n,exp);
	}
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
