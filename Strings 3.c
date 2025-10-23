#include<stdio.h>
int main(){
	char name[10];
	scanf("%[^\n]s",name);
	printf("%s",name);
	return 0;
}
