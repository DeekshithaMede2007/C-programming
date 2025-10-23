#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	int A[n];
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	for(i=0;i<n;i++){
		int idx = i;
		for(j=i+1;j<n;j++){
			if(A[idx] > A[j]){
				idx = j;
			}
		}
		int temp = A[idx];
		A[idx] = A[i];
		A[i] = temp;
	}
	for(i=0;i<n;i++){
		printf("%d ",A[i]);
	}
	return 0;
}
