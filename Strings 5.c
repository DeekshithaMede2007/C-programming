#include<stdio.h>
int main(){
	char String[10];
	int i,length=0,index=0;
	scanf("%[^\n]s",String);
	for(i=0;i<10;i++){
		if(String[index]!='\0'){
			length++;
			index++;
		}
	}
	printf("%d",length);
	return 0;
}
