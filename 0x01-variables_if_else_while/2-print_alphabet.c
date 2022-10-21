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

	while (loo <= 'z')
	{
		printf("%c", loo);
		loo = loo + 1;
	}
	return (0);
}
