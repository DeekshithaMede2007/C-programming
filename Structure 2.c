#include<stdio.h>
struct THUB{
	int x;
	char y;
};
int main(){
	struct THUB Obj1;
	Obj1.x=10;
	struct THUB Obj2;
	Obj2.x=20;
	printf("%d %d",Obj1.x,Obj2.x);
	return 0;
}
