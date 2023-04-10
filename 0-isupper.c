#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_sign - detects lowercase and non-lowercase letters
 *@c The character
 * Return: Always 0.
 */   

 int _isupper(int c){
    
    if (c >= 'A' && c <= 'Z')
    {
        return 1;
    }
    else{
        return 0;
    }
    
 }
    