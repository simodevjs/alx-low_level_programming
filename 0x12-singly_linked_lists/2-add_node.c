#include "lists.h" 
 /** 
  * add_node - adds a new node 
  * @head: the head 
  * @str: the string 
  * Return: the address 
  */ 
  
 list_t *add_node(list_t **head, const char *str) 
 { 
         list_t *nov; 
  
         size_t x; 
  
         nov = malloc(sizeof(list_t)); 
         if (nov == NULL) 
                 return (NULL); 
  
         nov->str = strdup(str); 
  
         for (x = 0; str[x]; x++) 
                 ; 
  
         nov->len = x; 
         nov->next = *head; 
         *head = nov; 
  
         return (*head); 
 }
