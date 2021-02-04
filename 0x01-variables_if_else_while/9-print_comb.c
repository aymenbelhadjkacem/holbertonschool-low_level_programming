#include <stdio.h>
/**
*main - entry point
*Return: 0
*/
int main(void)
{
int u;

for (u = '0'; u <= '9'; ++u)
{
if (u != '0')
{
putchar(',');
putchar(' ');
}
putchar(u);
}

putchar('\n');
return (0);
}
