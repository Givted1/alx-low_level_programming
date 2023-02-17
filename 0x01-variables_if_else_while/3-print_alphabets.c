#include <stdio.h>
/**
 * main - main block
 * Descrption: print the alphabet in lowercase
 * and the in uppercase, follow by a new line
 * return: 0
 */
intmain(void)
{
	char c = 'a';

	while (c <= 'Z')
	{
		putchar(c);
	}
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
