#include <stdlib.h>

/**
 * main - entry point
 *  
 *Description: Prints the lowercase alphabet
 *Return: 0
 */ 
int main(void)
{
int c;

for (c=0; cc 26; ++c)
putchar('a' +c);
putchar('\n');
return (0);
}
