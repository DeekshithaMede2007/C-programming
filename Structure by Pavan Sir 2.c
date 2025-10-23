#include<stdio.h>
#include<math.h>
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
	struct Line l1 ={{1, 7}, {3, 4}};
	struct Line l2 ={{7, 9}, {2, 3}};
	print_line(l1);
	print_line(l2);
	double len_of_l1=get_length(l1);
	double len_of_l2=get_length(l2);
	if(len_of_l1 < len_of_l2){
		printf("((%d, %d), (%d, %d)) Smaller", l1.p1.x,l1.p1.y,l1.p2.x,l1.p2.y);
	}
	else{
		printf("((%d, %d), (%d, %d)) Smaller",l2.p1.x,l2.p1.y,l2.p2.x,l2.p2.y);
	}
}
