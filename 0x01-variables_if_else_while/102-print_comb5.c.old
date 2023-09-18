#include<stdio.h> 
 /** 
  * main - Entry point 
  * 
  * Description: program prints possible combinations of two two-digit numbers 
  * 
  * Return: always 0 (success) 
  */ 
 int main(void) 
 { 
         int n, m; 
  
         for (n = 0; n <= 99; n++) 
         { 
                 for (m = n; m <= 99; m++) 
                 { 
                         if (n != m) 
                         { 
                                 putchar(((n / 10) % 10 + 48)); 
                                 putchar(n % 10 + 48); 
                                 putchar(' '); 
                                 putchar(((m / 10) % 10 + 48)); 
                                 putchar(m % 10 + 48); 
  
                                 if (n != 98 || m != 99) 
                                 { 
                                         putchar(','); 
                                         putchar(' '); 
                                 } 
                         } 
                 } 
         } 
         putchar('\n'); 
         return (0); 
 }
