#include "holberton.h"
/**
*void print_most_numbers: function that prints the numbers, from 0 to 9
*
* Return : nothing
*/
void print_most_numbers(void)
{
int x;
for (x = 0; x <= 9; ++x)
{
if ((x != 4) && (x != 2))
_putchar(x + '0');
}
_putchar('\n');
}
