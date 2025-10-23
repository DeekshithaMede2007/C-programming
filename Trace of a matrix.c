#include <stdio.h> 
 
// Function to calculate the trace of a square matrix 
int calculateTrace(int size,int mat[size][size])  
{ 
	int i;
    int trace = 0; 
    for (i = 0; i < size; i++)  
    { 
        trace += mat[i][i];     // Sum of diagonal elements 
    } 
    return trace; 
} 
 
int main()  
{  
    int size; 
    printf("Enter the size of the square matrix: "); 
    scanf("%d", &size); 
     
    int i,j, mat[size][size]; 
 
    printf("Enter the elements of the matrix:\n"); 
    for (i = 0; i < size; i++)  
    { 
        for (j = 0; j < size; j++)  
        { 
            scanf("%d", &mat[i][j]); 
        } 
    } 
    int trace = calculateTrace(size,mat);     // Calculate trace 
 
    printf("Trace of the matrix: %d\n", trace); 
 
    return 0; 
}
