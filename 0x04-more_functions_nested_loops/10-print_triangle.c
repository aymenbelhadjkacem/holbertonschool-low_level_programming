#include "holberton.h"
/**
* print_triangle - taaada
* @size: int
* Return: tsaref
*/
void print_triangle(int size)
{
int w, y, z;

x = 0;
if (size > 0)
{
while (w < size)
{
z = size - w;
while (z > 1)
{
_putchar(' ');
z--;
}
y = 0;
while (y <= w)
{
_putchar('#');
y++;
}
w++;
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
