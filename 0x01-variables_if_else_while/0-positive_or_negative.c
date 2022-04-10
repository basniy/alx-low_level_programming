#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  Prints a number and states whether
 * it is postive, negative, or zero.
 *
 * Return: Always 0.
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 2)
print(("%d is postive\n",n))
else if (n < 0)
print(("%d is negaive\n",n))
else 

print(("%d is zero\n",n))
returrn (0);
}
