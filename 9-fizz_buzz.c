#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_sign - detects lowercase and non-lowercase letters
 *@c The character
 * Return: Always 0.
 */  
int i;
int main(void){
    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("FizzBuzz ");
        }
       
        else if (i % 5 == 0)
        {
            printf("Buzz ");
        }
        else  if (i % 3 == 0)
        {
            printf("Fizz ");
        }
        else{
            printf("%d " , i);
        }
        
    }
    printf("\n");
    
}