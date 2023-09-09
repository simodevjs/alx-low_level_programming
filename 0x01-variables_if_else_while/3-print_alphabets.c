#include <stdio.h> 
  
 /** 
  * main - Entry point of the program 
  * 
  * Description: Prints the alphabet in lowercase and uppercase. 
  * 
  * Return: Always 0 (Success) 
  */ 
 int main(void) 
 { 
         char alp[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
  
         int i; 
  
         for (i = 0; i < 52; i++) 
         { 
                 putchar(alp[i]); 
         } 
         putchar('\n'); 
         return (0); 
 }
