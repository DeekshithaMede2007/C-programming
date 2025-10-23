  #include<stdio.h>
  int main(){
  	char String[10];
  	scanf("%[^\n]s",String);
  	int length = 0;
  	int index = 0;
  	while(String[index] != '\0'){
  		length++;
  		index++;
	  }
	printf("%d",length);
	return 0;
  }
