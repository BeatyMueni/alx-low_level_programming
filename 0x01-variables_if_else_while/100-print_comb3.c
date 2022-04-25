#include <stdio.h>                                                  

/**                                                                 

* main - Entry point                                                

* Return: Always 0 (Success)                                        

*/                                                                  
int main(void)                                                      
{                                                     
int number;                                 
for (number = 01; number <= 09; number++)                           
{                                                                 
putchar(number);                                                    
if (number == 01)                                                  
{                                                                   
break;                                                             
}                                                                   
putchar(',');                                                       
putchar(' ');                                                      
}                                                                   
putchar('\n');                                                     
return (0);                                                         
}
