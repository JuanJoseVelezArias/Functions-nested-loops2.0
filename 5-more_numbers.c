#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_sign - detects lowercase and non-lowercase letters
 *@c The character
 * Return: Always 0.
 */   

    char i, n;
void more_numbers(void){

    for ( i = 0; i < 10; i++)
    {
        for (n = 0; n <= 14; n++)
        {
            if (n > 9)
            {
                _putchar('0' + n / 10);
            }
            _putchar('0' + n % 10);
        }
        
        _putchar('\n');
    }
    
}