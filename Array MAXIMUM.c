#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int array[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	int max = array[0];
	for(i=1;i<n;i++){
		if(max < array[i]){
			max = array[i];
		}
	}
	printf("%d",max);
	return 0;
}
