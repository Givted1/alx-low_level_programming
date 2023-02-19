#include <stdio.h>

/**
 * main - print all possible different combination of two digits
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)/* print tens digits*/
	{
		for (ones = '0'; ones <= '9'; ones++)/* prints one digits*/
		{
			if (!((ones == tens) || (tens > ones)))/*eliminates repitition*/
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8'))/*addes comma and space*/
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
