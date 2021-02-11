#include "holberton.h"
/**
 * print_most_numbers - print most numbers
 */
void print_most_numbers(void)
{
int c;

for (c = 48; c <= 57; ++c)
{
if ((c != 52) && (c != 50))
{
_putchar(c);
}
}
_putchar('\n');
}
