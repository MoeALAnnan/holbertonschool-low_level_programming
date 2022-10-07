#include "main.h"
/**
 * jack_bauer - function
 * Description: this is a time counter
 * Return: type void
 */
void jack_bauer(void)
{
int mn = 0;
int hr = 0;
while (mn <= 60 && hr != 24)
{
while (hr < 24)
{
_putchar('0' + (hr / 10));
_putchar('0' + (hr % 10));
_putchar(':');
_putchar('0' + (mn / 10));
_putchar('0' + (mn % 10));
_putchar('\n');
mn++;
if (mn == 60)
{
mn = 0;
hr++;
}
}
}
}
