#include <stdio.h> 
void reverseArray(int [],int);  //function prototype 
void reverseArray(int arr[], int size)  //function Definition 
{ 
    int i; 
    for(i=0;i<size/2;i++)  
    { 
 // Swap the elements 
              int temp=arr[i]; 
  arr[i]=arr[size-i-1]; 
 arr[size-i-1]=temp; 
    } 
} 
 
int main()  
{ 
    int size,i; 
     
    printf("Enter the size of the array: "); 
    scanf("%d", &size); 
     
    int arr[size]; 
    printf("Enter %d elements:\n", size); 
    for (i = 0; i < size; i++)  
    { 
        scanf("%d", &arr[i]); 
    } 
     
    reverseArray(arr, size);    //function call 
  
    printf("Reversed array:\n"); 
    for (i = 0; i < size; i++)  
    { 
        printf("%d ", arr[i]); 
    } 
    printf("\n"); 
     
    return 0; 
} 
