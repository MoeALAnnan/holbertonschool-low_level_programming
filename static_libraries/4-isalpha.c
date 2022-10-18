#include "main.h"
/**
 * _isalpha - check if lowercase.
 * Description : this program is a checker
 * @c: int
 * Return: 1 success
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
return (0);
}
