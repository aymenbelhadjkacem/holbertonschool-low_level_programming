#include "holberton.h"
/**
 * more_numbers - print more numbers
 */
void more_numbers(void)
{
int b;
int h;

for (b = 1; b <= 10; ++b)
{
for (h = 0; h <= 14; ++h)
{
if (b > 9)
{
_putchar(h / 10 + '0');
}
_putchar(h % 10 + '0');
}
_putchar('\n');
}
}
