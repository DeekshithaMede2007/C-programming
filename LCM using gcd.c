#include<stdio.h>
int gcd(int a, int b){
	while(b!=0){
		int temp=b;
		b=a%b;
		a=temp;
	}
	return a;
}
int lcm(int a,int b){
	return (a*b)/gcd(a,b);
}
int main(){
	int a=12,b=8;
	int res=gcd(a,b);
	printf("gcd = %d\n",res);
	int result=lcm(a,b);
	printf("LCM = %d",result);
	return 0;
}
