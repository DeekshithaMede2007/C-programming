#include<stdio.h> 
int findFactors(int);   //function prototype 
int main() 
{ 
 int n; 
 scanf("%d",&n); 
 int fact_count=findFactors(n); 
 printf("\nFactors of given number %d is: %d\n",n,fact_count); 
 if(fact_count==2) 
 { 
  printf("Given number %d is PRIME  NUMBER",n); 
 } 
 else 
 { 
  printf("Given number %d is NOT A PRIME NUMBER",n); 
 } 
 return 0; 
} 
int findFactors(int m) 
{ 
 int count=2,i; 
 printf("1 "); 
 for(i=2;i<=m/2;i++) 
 { 
  if(m%i==0) 
   { 
    count++; 
   } 
 } 
 printf("%d\n",m); 
 return count; 
}
