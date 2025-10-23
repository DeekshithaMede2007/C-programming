#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int up = 0, down = 0;
	int pre = n % 10;
	n = n / 10;
	int cur = n / 10;
	if(cur > pre){
		up = 1;
	}
	else{
		down = 1;
	}
	pre = cur;
	n = n / 10;
	int f = 1;           //f=flag
	while(n){
		cur = n % 10;
		if(cur > pre){
			up = 1;
		}
		else{
			down = 1;
		}
		pre = cur;
		n = n / 10;
		int f = 1;
		while(n){
			cur = n % 10;
			if(up == 1 && cur < pre){
				up = 0;
				down = 1;
			}
			else if(down == 1 && cur > pre){
				up = 1;
				down = 0;
			}
			else{
				f = 0;
			}
			n = n / 10;
		}
		if(f = 1){
			printf("WAVE NUMBER");
		}
		else{
		printf("NOT A WAVE NUMBER");
		}
	}
	return 0;
}
