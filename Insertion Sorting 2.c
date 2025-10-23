#include<stdio.h>
int main(){
	int n,i,j,key;
	printf("Enter Size : ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter Element - %d = ",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=1;i<n;i++){                  // Insertion Sorting
		key=arr[i];
		j=i-1;
		while(key>arr[j] && j>=0){    // Searching a right position to insert
			arr[j+1]=arr[j];          // Copying to next position
			j--;
		}
		arr[j+1]=key;                 // Placing key in right position
		for(i=0;i<n;i++){
			printf("%d ",arr[i]);
		}
		printf("\n");
	}
	return 0;
}
