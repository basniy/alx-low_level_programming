#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success/correct)
 */ 
int main(void)
{
int number;
for (number = 48 ; number <= 57 ; number++)
{
putchar(number);

if (number == 57)
{
break;
} 
puthar(',');
putchar(' ');
}
putchar('\n);
return(0);
}
