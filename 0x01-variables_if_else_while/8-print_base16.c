#include <stdio.h> 
 /** 
  * main - Entry Point of the Programme. 
  * 
  * Description: Prints all numbers of base 16 
  * followed by a new line. 
  * 
  * Return: Always 0 (Success). 
  */ 
 int main(void) 
 { 
         char base16[17] = "0123456789abcdef"; 
  
         int i; 
  
         for (i = 0; i < 16; i++) 
         { 
                 putchar(base16[i]); 
         } 
         putchar('\n'); 
         return (0); 
 }
