#include<stdio.h>
int main(){
	int a,b,c,d,r1,i,j;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	r1 = a/b*c-b+a*d/3;
	printf("r1=%d\n",r1);
	scanf("%d",&i);
	j=(i++)+(++i);
	printf("j=%d\n",j);
	printf("Final value of i: %d\n",i);
	return 0;
}
