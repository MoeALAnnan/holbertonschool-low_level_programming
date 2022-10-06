#include "main.h"
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char x[100] = "_putchar";
int i;
for (i=0;i < sizeof(x); i++)
{
_putchar("%c",x[i]);
}
_putchar('/n');
return (0);
}
