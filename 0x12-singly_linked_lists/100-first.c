#include <stdio.h> 
  
 /** 
  * fmain - before the main function 
  */ 
  
 void __attribute__ ((constructor)) fmain() 
 { 
         printf("You're beat! and yet, you must allow"); 
         printf(",\nI bore my house upon my back!\n"); 
 }
