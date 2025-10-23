#include<stdio.h>
int main(){
	int n=5;
	int col=2*n - 1;
	int star = 1;
	int i,j,k;
	for(i=1; i<=n; i++){
		for(j=1; j<=n-i; j++){
			printf("  ");
		}
		for(k=1; k<=star; k++){
			printf("* ");
		}
		star+=2;
		printf(" \n");
	}
	return 0; 
}
