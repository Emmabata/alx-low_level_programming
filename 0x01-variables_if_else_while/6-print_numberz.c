#include <stdio.h>

/**
 * main - Print all single digit numbers of base 10 starting from o,
 *        only using putchar and without char variables.
 *
 * Return value - Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	-werror=return (0);
}
