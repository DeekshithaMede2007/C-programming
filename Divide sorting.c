#include<stdio.h>
void Solve(int arr[],int start,int mid,int end)
{
	int size1=mid-start+1;
	int size2=end-mid;
	int firstarray[size1];
	int secondarray[size2];
	int i,j,k=0;
	for(i=start;i<=mid;i++){
		firstarray[k]=arr[i];
		k++;
	}
	k=0;
	for(j=mid+1;j<=end;j++){
		secondarray[k]=arr[j];
		k++;
	}
	int Answer[size1+size2];
	i=0,j=0,k=0;
	while(i<size1 && j<size2)
	{
	 if(firstarray[i]<secondarray[j]){
		Answer[k]=firstarray[i];
		i++;
		k++;
	 }
	 else{
		Answer[k]=secondarray[j];
		j++;
		k++;
	 }
   }
   if(i<size1){
   	while(i<size1){
   		Answer[k]=firstarray[i];
   		i++;
   		k++;
	   }
   }
   if(j<size2){
   	while(j<size2){
   	     Answer[k]=secondarray[j];
   	     j++;
   	     k++;
	   }
   }
   k=start;
   for(i=0;i<size1+size2;i++){
   	arr[k]=Answer[i];
   	k++;
   }
}

void Divide(int arr[],int start,int end){
	if(start<end){
		int mid =(start+end)/2;
		Divide(arr,start,mid);
		Divide(arr,mid+1,end);
		Solve(arr,start,mid,end);
	}
}

int main(){
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	Divide(arr,0,n-1);
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
