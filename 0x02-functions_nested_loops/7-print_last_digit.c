#include "holberton.h"
/**
* print_last_digit - absolute value of an integer
* @c : parameter
* Return: success
*/
int print_last_digit(int c)
{
int lastDigit;
lastDigit = c % 10;
if (lastDigit < 0)
{
lastDigit = (lastDigit * (-1));
}
_putchar(lastDigit + '0');
return (lastDigit);

}
