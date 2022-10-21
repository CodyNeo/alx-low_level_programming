#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	char loo = 'a';

	for (loo = 'a'; loo <= 'z'; loo++)
	{
		if (loo == 'q' || loo == 'e')
			continue;
		printf("%c", loo);
	}
	return (0);
}
