#include<stdio.h>
int fibonocci(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	return (fibonocci(n-1) + fibonocci(n-2));
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",fibonocci(n));
	return 0;
}
