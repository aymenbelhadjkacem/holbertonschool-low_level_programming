#include "holberton.h"
#include <stdio.h>
/**
*_abs - write the absolute value of an number .
*@n: the number to be tested.
* Return: Always 0.
*
*/
int  _abs(int n)
{
if (n < 0)
{
n = n * -1;
}
return (n);
}
