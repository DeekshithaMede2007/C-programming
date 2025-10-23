#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,j,k;
	int space=2*n-2;
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++){
			printf("* ");
		}
		for(j=1; j<=space; j++){
			printf("  ");
		}
		for(j=1; j<=i; j++){
			printf(" *");
		}
		space-=2;
		printf("  \n");
	}
	return 0;
} 
