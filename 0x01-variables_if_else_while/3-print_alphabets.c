#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * print message
 * Return: success
 */

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
	putchar(x);
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
	putchar(x);
	}
	putchar('\n');

	return (0);
}
