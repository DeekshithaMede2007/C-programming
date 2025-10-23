#include<stdio.h>
void fun(int i){
	if(i>7){
		return;
	}
	fun(i+2);
	printf("%d ",i);
	fun(i+1);
}
int main(){
	fun(1);
	return 0;
}
