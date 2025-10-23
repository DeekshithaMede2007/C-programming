#include<stdio.h>
struct Point{
	int x,y;
};
struct Line{
	struct Point p1,p2;
};
double get_length(struct Line l){
	return sqrt(pow((l.p2.x - l.p1.x),2)+pow((l.p2.y - l.p1.y),2));
}
void print_line(struct Line l){
	printf("Line[(%d, %d), (%d, %d)]\n",l.p1.x,l.p1.y,l.p2.x,l.p2.y);
}
int main(){
	int n;
	printf("Enter number of lines : ");
	scanf("%d",&n);
	struct Line lines[n];
	int i;
	for(i=0;i<n;i++){
		printf("Enter co-ordinates for X1,Y1 for line %d : ",i+1);
		scanf("%d%d",&lines[i].p1.x,&lines[i].p1.y);
		printf("Enter co-ordinates for X2,Y2 for line %d : ",i+1);
		scanf("%d%d",&lines[i].p2.x,&lines[i].p2.y);
	}
	printf("Printing all straight lines\n");
	for(i=0;i<n;i++){
		print_line(lines[i]);
		printf(" : %.2f\n",get_length(lines[i]));
	}
	return 0;
}
