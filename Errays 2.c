#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int totalXor = 0;
	if(n%4==0){
		totalXor = n;
	}
	else if(n%4==2){
		totalXor = n+1;
	}
	else if(n%4==1){
		totalXor = 1;
	}
	else{
		n%4==3;
		totalXor = 0;
    }
	return 0;
}
