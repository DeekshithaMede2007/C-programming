#include<stdio.h>
#include<string.h>
void  reversedstring(char str[]){
	int length = stringlength(str);
	int i;
	for(i=0;i<length/2;i++){
		char temp=str[i];
		str[i]=str[length-i-1];
		str[length-i-1]=temp;
	}
}
int stringlength(char str[]){
	int length=0;
	while(str[length]!='\0'){
		length++;
	}
	return length;
}
int main(){
	char str[100];
	scanf("%[^\n]s",str);
	int len=stringlength(str);
	printf("Length of the String = %d\n",len);
	reversedstring(str);
	printf("Reverse of the String = %s",str);
}
