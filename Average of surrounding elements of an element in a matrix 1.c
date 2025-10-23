#include<stdio.h>
int main(){
	int n,i,j,p,q;
	scanf("%d",&n);
	int mat1[n][n];
	float mat2[n-2][n-2];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&mat1[i][j]);
		}
	}
	for(p=0;p<n-2;p++){
		for(q=0;q<n-2;q++){
			mat2[p][q]=(mat1[p][q]+mat1[p+1][q]+mat1[p+2][q]+mat1[p][q+1]+mat1[p][q+2]+mat1[p+1][q+2]+mat1[p+2][q+1]+mat1[p+2][q+2])/8.0;
		}
	}
	for(p=0;p<n-2;p++){
		for(q=0;q<n-2;q++){
			printf("%.3f ",mat2[p][q]);
		}
		printf("\n");
	}
	return 0;
}
