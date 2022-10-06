#include "main.h"
/**
 * print_sign - print the sign of an integer.
 * Description : this program is a checker
 * @n: int
 * Return: 1 if > 0, return 0 if = 0, return - if <0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
