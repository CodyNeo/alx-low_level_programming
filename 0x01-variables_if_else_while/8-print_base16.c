#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	char po = '0';

	while (po <= '9')
	{
		putchar(po);
		if (po == '9')
		{
			po = 'a';
			for (; po <= 'f'; po++)
				putchar(po);
			break;
		}
		po++;
	}
	putchar('\n');
	return (0);
	}

