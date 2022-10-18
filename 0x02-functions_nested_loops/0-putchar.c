#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always return 0.
 */
int main(void)
{
	char *text = "_putchar";

	while (*text)
	{
		_putchar(*text);
		text++;
	}
	_putchar('\n');

	return (0);
}
