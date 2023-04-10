#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_sign - detects lowercase and non-lowercase letters
 *@c The character
 * Return: Always 0.
 */  

void print_square(int size){
    if(size <= 0)
    {
        _putchar('\n');
    } 
    else{
    int i, m;
    for ( i = 0; i < size; i++)
    {
        for (m = 0; m < size; m++)
        {
            _putchar('#');
    } 
    _putchar('\n');
    }
    }
    
}