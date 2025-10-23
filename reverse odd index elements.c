#include<stdio.h>
int main(){
	int n,m,i,j;
	scanf("%d %d",&n,&m);
	int mat[n][m],sum[n],s[m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<n;i++){
		if(i%2!=0){
			for(j=m-1;j>=0;j--){
				printf("%d ",mat[i][j]);
			}
			printf("\n");
		}
		else{
			for(j=0;j<m;j++){
				printf("%d ",mat[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
