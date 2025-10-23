#include<stdio.h>
struct Address{
	int dono;
	char village[20];
	char state[20];
	char pincode[6];
};
struct StudentDetails{
	char name[30];
	char rollno[10];
	int age;
	char phno[10];
	struct Address Myaddress;
};
int main(){
	int n;
	printf("Enter number of Students : ");
	scanf("%d",&n);
	struct StudentDetails Obj[n];
	int i;
	for(i=0;i<n;i++){
		printf("Enter Name : ");
		scanf("%s",Obj[i].name);
		printf("Enter Roll.No : ");
		scanf("%s",Obj[i].rollno);
		printf("Enter Age : ");
		scanf("%d",&Obj[i].age);
		printf("Enter Phone.No : ");
		scanf("%s",Obj[i].phno);
		printf("Enter Door.No : ");
		scanf("%d",&Obj[i].Myaddress.dono);
		printf("Enter Village Name : ");
		scanf("%s",Obj[i].Myaddress.village);
		printf("Enter State Name : ");
		scanf("%s",Obj[i].Myaddress.state);
		printf("Enter Pincode : ");
		scanf("%s",Obj[i].Myaddress.pincode);
	}
	for(i=0;i<n;i++){
		printf("%s\n%s\n%d\n%s\n%d\n%s\n%s\n%s\n",Obj[i].name,Obj[i].rollno,Obj[i].age,Obj[i].phno,Obj[i].Myaddress.dono,Obj[i].Myaddress.village,Obj[i].Myaddress.state,Obj[i].Myaddress.pincode);
	}
	return 0;
}
