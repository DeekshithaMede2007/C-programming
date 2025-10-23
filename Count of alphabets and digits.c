#include<stdio.h> 
int main() 
{ 
 char str[100]; 
 int i; 
 int digits=0,lowercase=0,uppercase=0,vowels=0,consonants=0; 
 printf("Enter a line of Text\n"); 
 scanf("%[^\n]s",str); 
     for(i = 0; str[i] != '\0'; i++)  
 { 
          char ch = str[i]; 
 
          if (ch>='0' && ch<='9')  
  { 
               digits++;   
          }  
 else if(ch>='A' && ch<='Z')  
  { 
   uppercase++; 
      }
      else if(ch>='a' && ch<='z') 
      { 
    lowercase++; 
  }  
               if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
                 ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
  { 
                  vowels++; 
          }
      }
    consonants=lowercase+uppercase-vowels;
    printf("Lowercase letters: %d\n", lowercase); 
    printf("Uppercase letters: %d\n", uppercase); 
    printf("Vowels: %d\n", vowels); 
    printf("Consonants: %d\n", consonants); 
    printf("Digits: %d\n", digits); 
    return 0; 
} 

