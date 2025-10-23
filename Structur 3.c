#include<stdio.h>
struct Years{
	int Age;
};
struct Details{
	char Name[10];
	struct Years Myage;
};
int main(){
	struct Details Obj;
	scanf("%s",Obj.Name);
	scanf("%d",&Obj.Myage.Age);
	printf("%s %d",Obj.Name,Obj.Myage.Age);
	return 0;
}
