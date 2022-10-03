#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

int x;
x= n %10;

if (int x= n %10 > 5)
{
printf("Last digit of %d is %d and is greater than 5", n, x);
}
else if (x= n %10 == 0)
{
printf("Last digit of %d is %d and is %d", n, x, x);
}
else if (x= n %10 < 6 && x != 0)
{
printf("Last digit of %d is %d and is less than 6 and is not 0 ", n, x);
}
return (0);
}
