#include<stdio.h>
#include<string.h>
struct Student{
	int id;
	char name[20];
	int age;
};
union Employee{
	int id;
	char name[20];
	int salary;
};
int main(){
	struct Student s1={11,"Alice",15};
	union Employee e1;
	printf("Structure example:\n");
	printf("Id:%d\nName:%s\nAge:%d\n",s1.id,s1.name,s1.age);
	printf("Union example:\n");
	e1.id = 21;
	printf("Id:%d\n",e1.id);
	strcpy(e1.name,"Bob");
	printf("Name:%s\n",e1.name);
	e1.salary = 25000;
	printf("Salary:%d\n",e1.salary);
	printf("After storing salary, Id : %d\n",e1.id);
	printf("After storing salary, Name : %s\n",e1.name);
	return 0;
}
