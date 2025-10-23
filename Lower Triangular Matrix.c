#include <stdio.h> 
// Function to print the lower triangular matrix 
void printLowerTriangular(int rows, int cols,int mat[rows][cols])  
{    
     int i,j; 
     for (i = 0; i < rows; i++)  
     { 
        for (j = 0; j < cols; j++)  
        { 
            if (j <= i)  
            { 
                printf("%d ", mat[i][j]);     // Print element if j <= i 
            }  
           else  
           { 
                printf("0 ");     // Print 0 otherwise 
            } 
        } 
        printf("\n"); 
    } 
} 
int main()  
{ 
    int rows, cols; 
    printf("Enter the number of rows and columns: "); 
    scanf("%d %d", &rows, &cols); 
     
    int mat[rows][cols],i,j; 
    printf("Enter the elements of the matrix:\n"); 
    for (i = 0; i < rows; i++)  
     { 
            for (j = 0; j < cols; j++)  
 { 
            scanf("%d", &mat[i][j]); 
            } 
    } 
    printf("Lower triangular matrix:\n"); 
    printLowerTriangular(rows, cols,mat); 
 
    return 0; 
} 

