
#include <stdio.h>
#include <stdlib.h>
/**
*main - ghassen pd
**@a: int
*@b: char
*Return: ghassen el kharta b 100
**/
int main(int a, char **b)
{
int s, cent = 0;
if (a != 2)
{
printf("Error\n");
return (1);
}
s = atoi(*(b + 1));
while (s >= 25)
s -= 25, cent++;
while (s >= 10)
s -= 10, cent++;
while (s >= 5)
s -= 5, cent++;
while (s >= 2)
s -= 2, cent++;
while (s >= 1)
s--, cent++;
printf("%d\n", cent);
return (0);
}
