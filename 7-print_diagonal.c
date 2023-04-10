#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_sign - detects lowercase and non-lowercase letters
 *@c The character
 * Return: Always 0.
 */   
int i, m;
void print_diagonal(int n){
    
if(n <= 0)
    {
        _putchar('\n');
    } 
else{
    
    for ( i = 0; i < n; i++)
    {
    
       
        for (m = 0; m < i; m++)
        {
            _putchar(' ');
        }
         _putchar('\\');
        _putchar('\n');
        }
}
}