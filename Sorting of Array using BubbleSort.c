#include <stdio.h> 
int bubbleSort(int[],int);   //function declaration 
 
// Function to perform Bubble Sort  
int bubbleSort(int arr[], int size)   //function definition 
{  
	int i,j;
    for (i = 0; i < size - 1; i++)  
    { 
        for (j = 0; j < size - i - 1; j++)  
         { 
                if (arr[j] > arr[j + 1])  
                { 
                 // Swap arr[j] and arr[j + 1] 
                 int temp = arr[j]; 
                 arr[j] = arr[j + 1]; 
                 arr[j + 1] = temp; 
                  } 
           } 
      } 
} 
// Function to print the array 
int printArray(int arr[], int size)  
{ 
	int i;
    for (i = 0; i < size; i++)  
     { 
        printf("%d ", arr[i]); 
      } 
      printf("\n"); 
} 
 
int main()  
 { 
    int size; 
    printf("Enter the size of the array: "); 
    scanf("%d", &size); 
 
    int arr[size],i; 
    printf("Enter %d elements:\n", size); 
    for (i = 0; i < size; i++)  
     { 
        scanf("%d", &arr[i]); 
    } 

    bubbleSort(arr, size);     // Sorting the array 
 
    printf("Sorted array:\n"); 
    printArray(arr, size);     // Printing the sorted array 
 
    return 0; 
}
