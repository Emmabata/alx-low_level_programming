#include <stdio.h>

/**
 * main-Prints the alphabet in lowercase.
 *
 * return: Always 0.
 */
int main(void)
{
	char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
			putchar(letter);

	putchar('\n');
	/*have to always return 0.*/
	return (0);
}

