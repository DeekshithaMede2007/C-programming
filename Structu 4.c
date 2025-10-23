#include<stdio.h>
struct StudentDetails{
	char name[20];
	int age;
	int marks[3];
};
int main(){
	int n;
	printf("Enter number of Students : ");
	scanf("%d",&n);
	struct StudentDetails Obj[n];
	int i,j;
	for(i=0;i<n;i++){
		printf("Enter Name : ");
		scanf("%s",Obj[i].name);
		printf("Enter Age : ");
		scanf("%d",&Obj[i].age);
		printf("Enter Marks : ");
		for(j=0;j<3;j++){
			scanf("%d",&Obj[i].marks[j]);
		}
	}
	for(i=0;i<n;i++){
		printf("%s\n%d\n",Obj[i].name,Obj[i].age);
		for(j=0;j<3;j++){
			printf("%d ",Obj[i].marks[j]);
		}
		printf("\n");
	}
	return 0;
}
