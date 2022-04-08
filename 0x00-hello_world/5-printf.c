#include <stdio.h>

/**
 *
 * *main - Entry point
 *
 * *
 *
 * *Return: Always 0 (Success)
 *
 * */

int main(void)

{

	puts("\"with proper gramar, but the outcome is a piece of art,\n");

	return (0);

}

chmod u+x 5-printf.c



vim 6-size.c

/**
 *
 * *main - Entry point
 *
 * *
 *
 * *Return: Always 0 (Success)
 *
 * */

int main(void)

{

	int a;

	log int b;

	long long int c;

	char d;

	float f;



	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));

	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));

	printf("Size of long intr: %lu byte(s)\n", (unsigned long)sizeof(b));

	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));

	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);

}


