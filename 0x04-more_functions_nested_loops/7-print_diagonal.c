#include "holberton.h"
/**
*print_diagonal - function that draws a diagonal line on the terminal.
*@n:int
*Return: 0
*/
void print_diagonal(int n)
{
int v, y;
v = 0;
if (n > 0)
for (y = 0 ; y < n; y++)
{
for (v = 0; v < y; v++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
else
_putchar('\n');
}
