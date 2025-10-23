#include<stdio.h>
void func(int i){
	if(i>8){
		return;
	}
	printf("%d ",i);
	func(i+2);
	printf("%d ",i);
	func(i+1);
}
int main(){
	func(1);
	return 0;
}
