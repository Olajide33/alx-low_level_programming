#include <stdio.h>

/**
 * main - Prints Alphabet in lowercase followed by a new line, except q and e
 * Return: 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
		if (la != 'q' && la != 'e')
		putchar(la);
	putchar('\n');
	return (0);
}
