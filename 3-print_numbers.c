#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_sign - detects lowercase and non-lowercase letters
 *@c The character
 * Return: Always 0.
 */   

    char n;

void print_numbers(void){
     char num = '0';
    
    while(num <= '9'){

       _putchar(num);
       num++; 
    }
    _putchar('\n');
}