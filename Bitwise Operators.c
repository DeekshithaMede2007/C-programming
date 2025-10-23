#include<stdio.h>
void calculate_the_maximum(int n,int k){
	int a=0,b=0,c=0,i,j;
	for(i=1;i<n;i++){
		for(j=i+1;j<=n;j++){
			if((i&j)<k && (i&j)>a){
				a=i&j;
			}
			if((i|j)<k && (i|j)>b){
				b=i|j;
			}
			if((i^j)<k && (i^j)>c){
				c=i^j;
			}
		}
	}
		printf("%d\n%d\n%d\n",a,b,c);
}
int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	calculate_the_maximum(n,k);
	return 0;
}
