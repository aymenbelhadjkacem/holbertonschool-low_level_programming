#include "holberton.h"
/**
* print_line - prints a straight line.
* @n: int
* Return: 0
*/
void print_line(int n)
{
int f;
f = 0;
if (n > 0)
{
while (f < n)
{
_putchar('_');
f++;
}
}
_putchar('\n');
}
