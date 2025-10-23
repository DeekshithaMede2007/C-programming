#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
struct triangle 
{ 
  int a; 
  int b; 
  int c; 
}; 
typedef struct triangle triangle; 
void sort_by_area(triangle* tr, int n)  
{ 
 /** 
 * Sort an array a of the length n 
 */ 
 float areas[n];
 int i,j; 
 for (i = 0; i < n; i++)  
{ 
  float p = (tr[i].a + tr[i].b + tr[i].c) / 2.0; 
  areas[i] = sqrt(p * (p - tr[i].a) * (p - tr[i].b) * (p - tr[i].c)); 
 } 
 // Applying bubble sort 
 for (i = 0; i < n; i++)  
{ 
  for (j = 0; j < n - 1 - i; j++)  
{ 
if (areas[j] > areas[j + 1]) { 
   // swapping area 
   float t = areas[j]; 
   areas[j] = areas[j + 1]; 
areas[j + 1] = t; 
 
   // swapping triangles too 
   triangle temp = tr[j]; 
   tr[j] = tr[j + 1]; 
   tr[j + 1] = temp; 
   } 
  } 
    } 
}         
int main() 
{ 
  int n, i; 
printf("Enter number of triangles: "); 
  scanf("%d", &n); 
  triangle *tr = malloc(n * sizeof(triangle)); 
  for (i = 0; i < n; i++) { 
   printf("Enter sides of triangle %d: ", i + 1); 
   scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c); 
  } 
  sort_by_area(tr, n); 
  printf("After Sorting the given triangles based on areas: \n"); 
  for (i = 0; i < n; i++) { 
   printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c); 
  } 
 return 0; 
} 
