#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int A[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	int totalXor = 0;
	for(i=1;i<=n+1;i++){
		totalXor = totalXor ^ i;
	}
	for(i=0;i<n;i++){
		totalXor = totalXor ^ A[i];
	}
	printf("%d",totalXor);
	return 0;
}
