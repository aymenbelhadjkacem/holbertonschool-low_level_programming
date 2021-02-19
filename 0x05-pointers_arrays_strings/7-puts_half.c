#include "holberton.h"
/**
* puts_half - main function that prints half of a string length.
* @str: character.
* Return: half of a string.
*/
void puts_half(char *str)
{
	int i, k;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	k = i;
	i = k / 2;
	if (k % 2 == 0)
	{
		while (i < k)
		{
			_putchar(str[i]);
			k++;
		}
	}
	else
	{
		i += 1;
		while (i < k)
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
