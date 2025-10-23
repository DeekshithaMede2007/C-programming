#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int ADD(int x, int y){
	int res=x+y;
	return res;
}
int SUB(int x, int y){
	int res=x-y;
	return res;
}
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int ans=ADD(n,m);
	printf("%d",ans);
	return 0;
}
