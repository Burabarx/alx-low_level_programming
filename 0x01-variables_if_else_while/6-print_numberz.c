#include <stdio.h>
/**
 *main - Entry point
 *Description: prints single digit numbers of base 10
 *starting from 0, followed by a new line.
 *Return: 0
 */
int main(void)
{
int num, i;
for (num = 48, i = 0; i < 10; num++, i++)
{
putchar(num);
}
putchar(10);
return (0);
}
