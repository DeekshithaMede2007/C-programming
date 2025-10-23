#include<stdio.h>
int main(){
	int n,i,fact=1;
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		fact*=i;
	}
	printf("Factorial of n = %d",fact);
	return 0;
}
