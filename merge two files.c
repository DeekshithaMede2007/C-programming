#include <stdio.h> 
int main(int argc, char *argv[])  
{ 
  if (argc != 4)  
  { 
   printf("Usage: %s source1.txt source2.txt destination.txt\n", argv[0]); 
   return 1; 
  } 
  FILE *sourceFile1, *sourceFile2, *destinationFile; 
  char ch; 
 // Open the first source file for reading 
  sourceFile1 = fopen(argv[1], "r"); 
  if (sourceFile1 == NULL)  
{ 
   perror("Error opening first source file"); 
   return 2; 
  } 
  // Open the second source file for reading 
  sourceFile2 = fopen(argv[2], "r"); 
  if (sourceFile2 == NULL)  
{ 
 perror("Error opening second source file"); 
 fclose(sourceFile1); 
   return 3; 
  } 
  // Open the destination file for writing 
  destinationFile = fopen(argv[3], "w"); 
  if (destinationFile == NULL)  
{ 
   perror("Error opening destination file"); 
   fclose(sourceFile1); 
   fclose(sourceFile2); 
   return 4; 
  } 
}
