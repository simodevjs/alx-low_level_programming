#include "lists.h" 
  
 /** 
  * add_node_end - adds a new node 
  * @head: the head 
  * @str: the string 
  * Return: the address 
  */ 
  
 list_t *add_node_end(list_t **head, const char *str) 
 { 
         list_t *nov, *swp; 
         size_t x; 
  
         nov = malloc(sizeof(list_t)); 
         if (nov == NULL) 
                 return (NULL); 
  
         nov->str = strdup(str); 
  
         for (x = 0; str[x]; x++) 
         { 
         } 
         nov->len = x; 
         nov->next = NULL; 
         swp = *head; 
  
         if (swp == NULL) 
         { 
                 *head = nov; 
         } 
         else 
         { 
                 while (swp->next != NULL) 
                         swp = swp->next; 
                 swp->next = nov; 
         } 
  
         return (*head); 
 }
