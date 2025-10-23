#include<stdio.h>
int main(){
	char name[3];
	int i;
	for(i=0;i<3;i++){
		scanf("%c ",&name[i]);
	}
	for(i=0;i<3;i++){
		printf("%c ",name[i]);
	}
	return 0;
}
