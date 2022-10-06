#include "main.h"
/**
 * print_last_digit - print last digit
 * Description : this program is a checker
 * @c: int
 * Return: 1 success
 */
int print_last_digit(int c)
{
if (c < 0)
{
c = -1 * c % 10;
}
else if (c == -2147483648)
{
c = -1 * c / 10000 % 10;
}
else
{
c = c % 10;
}
_putchar('0' + c);
return (c);
}
