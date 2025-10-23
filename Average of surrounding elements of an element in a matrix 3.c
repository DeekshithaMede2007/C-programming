#include<stdio.h>
int total(int n,int mat1[n][n],int p,int q){
	int i,j,Total,sum=0;
	for(i=p;i<p+3;i++){
		for(j=q;j<q+3;j++){
				sum += mat1[i][j];
		}
	}
	Total = sum - mat1[p+1][q+1];
	return Total;
}
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
			mat2[p][q]=(total(n,mat1,p,q))/8.0;
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
