#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
int count;

for (count = 'a'; count <= 'z'; count++)
{
_putchar(count);
}
_putchar('\n');

}
