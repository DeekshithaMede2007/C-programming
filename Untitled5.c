#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=1; i<=n; i++){
		if(i % 2 == 1){
			for(j=1; j<=n; j++){
				printf("%d ",j);
			}
		}
		else{
			for(j=n; j>=1; j--){
				printf("%d ",j);
			}
		}
		printf("\n");
	}
	return 0;
	}
