#include <stdio.h>
#include "main.h"

/**

 * print_last_digit - This program prints the last digit
 *
 * Description: To print last digit
 * Return: Return the value of the last digit
 */
 *

 * @n: input number as an integer.

 *

 * Return: last digit.

 */

int print_last_digit(int n)

{

	int l;



	l = n % 10;

	if (l < 0)

	{

		_putchar(-l + 48);

		return (-l);

	}

	else

	{

		_putchar(l + 48);

		return (l);

	}

}
