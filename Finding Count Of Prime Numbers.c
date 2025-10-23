#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	 int i,j,l,r;
	 scanf("%d %d",&l,&r);
	 int cnt=0;
	 for(i=l ; i<=r ; i++){
	 	int fc=0;
	 	for(j=1; j<=i ; j++){
	 		if(i % j == 0){
	 			fc++;
			 }
		 }
		 if(fc == 2){
		 	cnt++;
		 }
	 }
	 printf("%d",cnt);
	 return 0;
}
