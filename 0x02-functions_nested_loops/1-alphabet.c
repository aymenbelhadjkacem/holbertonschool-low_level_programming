#include "holberton.h"
/**
 * print_alphabet - print
 * print message
 * Return: success
 */
void print_alphabet(void)
{
int x;

for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
