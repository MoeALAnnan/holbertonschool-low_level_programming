#include <stdio.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
int main(void){
char x[100] = {'_','p','u','t','c','h','a','r'};
int i;
for (i=0;i < strlen(x); i++)
_putchar("%d",x[i]);
return (0);
}
