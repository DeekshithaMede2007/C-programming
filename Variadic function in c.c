#include <stdio.h> 
#include <stdarg.h> 
// Function to find the average of a variable number of integers 
double findAverage(int num, ...)  
{ 
 va_list args; 
 va_start(args, num); 
 double sum = 0;
 int i;
 for (i = 0; i < num; i++)  
{ 
  sum += va_arg(args, int); 
 } 
 va_end(args); 
 return sum / num; 
} 
int main() { 
 // Example usage of the variadic function 
 double average1 = findAverage(3, 10, 20, 30); 
 double average2 = findAverage(2, 10, 20); 
 double average3 = findAverage(6, 100, 200, 300, 400, 500, 600); 
 printf("Average: %.2f\n", average1); 
 printf("Average: %.2f\n", average2); 
 printf("Average: %.2f", average3); 
 return 0; 
} 
