#include <stdio.h> 
 /** 
  * main - prints the alphabet in lowercase using putchar. 
  * 
  * Return: Always 0. 
  */ 
 int main(void) 
 { 
         char alp[27] = "abcdefghijklmnopqrstuvwxyz"; 
         int i; 
  
         for (i = 0; i < 26; i++) 
         { 
                 putchar(alp[i]); 
         } 
         putchar('\n'); 
         return (0); 
 }
