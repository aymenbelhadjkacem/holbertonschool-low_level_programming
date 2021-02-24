
#include "holberton.h"
#include <stdio.h>
/**
*_strlen_recursion - check
*@s:var
*Return:0
*
*/
int _strlen_recursion(char *s)
{
int f = 1;
{
if (*s == '\0')
return (0);
return (f + _strlen_recursion(s + 1));
}
}
