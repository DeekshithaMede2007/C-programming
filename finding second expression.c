#include<stdio.h>
int main(){
	int i,j;
	for(i=0;i<10;i++){
		j=(i++)+(++i);
	}
	for(i=0;i<10;i++){
		printf("%d ",j);
	}
	return 0;
}
