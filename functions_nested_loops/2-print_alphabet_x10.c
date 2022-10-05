#include "main.h"
/**
 * print_alphabet_x10 - a function that prints out the alphabet 10times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void);
{
int x = 0;
while (x < 10)
{
int i = 'a';
while (i <= 'z')
{
_putchar(i);
i++;
}
x++;
_putchar('\n');
}
}
