#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: Prints the lowercase alphabet excluding e and q
 * Return: 0
 */ 
int main(void)
{
char c;

for (c='a'; c <= 'z'; ++c)
{
if (c != 'e'; && c != 'q')
putchar(c);
}
putchar('\n');
return (0);
}
