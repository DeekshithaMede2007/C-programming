#include<stdio.h>
struct THUB{
	int x;
	char y;
};
int main(){
	struct THUB DSP;
	DSP.x=20;
	DSP.y='T';
	printf("%d %c",DSP.x,DSP.y);
	return 0;
}
