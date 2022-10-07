#include "main.h"
/**
 * times_table - learn the multiplication table.
 * Description : this program is a checker
 *
 * Return: void
 */
void times_table(void)
{
int i = 0;
int j = 0;
int k = 0;
while (j < 10)
{
while (k < 10)
{
i = j * k;
if (i < 10)
{
if (k != 0)
{_putchar(' ');
_putchar(' ');
}
_putchar('0' + i);
if (k != 9)
_putchar(',');
}
else if (i >= 10)
{
_putchar(' ');
_putchar('0' + i / 10);
_putchar('0' + i % 10);
if (k != 9)
{
_putchar(',');
}
}
k++;
}
_putchar('\n');
k = 0;
j++;
}
}
