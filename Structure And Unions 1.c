#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* Next;
};

int main(){
	struct Node* Node1=(struct Node*)malloc(sizeof(struct Node));
	Node1->data=100;
	Node1->Next=NULL;
	struct Node* Node2=(struct Node*)malloc(sizeof(struct Node));
	Node2->data=200;
	Node2->Next=NULL;
	Node1->Next=Node2;
	printf("%d\n%d",Node1->Next,Node2);
	return 0;
}