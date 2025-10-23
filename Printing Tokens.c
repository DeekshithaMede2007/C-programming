#include<stdio.h> 
int main() 
{ 
 char sentance[100]; 
 printf("Enter a line of Text\n"); 
 scanf("%[^\n]s",sentance); 
  
 int i; 
 for(i=0; sentance[i]!='\0';i++) 
 { 
  if(sentance[i]==' ') {
    printf("\n"); 
}
  else {
    printf("%c",sentance[i]);
}
 } 
 return 0; 
}
