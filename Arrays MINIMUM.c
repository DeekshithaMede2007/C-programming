#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int array[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	int min = array[0];
	for(i=1;i<n;i++){
		if(min > array[i]){
			min = array[i];
		}
	}
	printf("%d",min);
	return 0;
}
