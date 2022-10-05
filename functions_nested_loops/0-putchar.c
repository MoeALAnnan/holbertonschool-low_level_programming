#include "main.h"
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
{
return (write(1, &c, 1));
}
int main(void)
{
char x[100] = {'_','p','u','t','c','h','a','r'};
int i;
for (i=0;i < strlen(x); i++)
_putchar("%d",x[i]);
return (0);
}
