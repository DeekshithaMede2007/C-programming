//Nested Structures
#include<stdio.h>
struct Date{
	int day;
	int month;
	int year;
};
struct Student{
	int id;
	char name[40];
	float cgpa;
	char college[40];
	struct Date DateOfBirth;
};
int main(){
	struct Student s1 = {1, "Alice", 7.7, "AUS", {19, 11, 1999}};
	printf("ID\tName\tCGPA\tCollege\tDOB\n");
	printf("---------------------------------------\n");
	printf("%d\t%s\t%.2f\t%s\t%d-%d-%d\n",s1.id,s1.name,s1.cgpa,s1.college,s1.DateOfBirth.day,s1.DateOfBirth.month,s1.DateOfBirth.year);
	printf("Age is : %d\n", 2025 - s1.DateOfBirth.year);
	return 0;
}
