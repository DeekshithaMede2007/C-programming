#include <stdio.h>
int binarySearch(int arr[], int n, int key) {
 	int left = 0, right = n- 1;
 	while (left <= right) {
 		int mid = left + (right- left) / 2;
 		if (arr[mid] == key) return mid;
 		if (arr[mid] < key) left = mid + 1;
 		else right = mid- 1;
 	}
 	return-1;
}
int main() {
	int n,i,key;
	scanf("%d",&n);
 	int arr[n];
 	for(i=0;i<n;i++){
 		scanf("%d",&arr[i]);
	}
	scanf("%d",&key);
 	int result = binarySearch(arr, n, key);
 	printf("Element %d found at index: %d\n", key, result);
 	return 0;
 }
