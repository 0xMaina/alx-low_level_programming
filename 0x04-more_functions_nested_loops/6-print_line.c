#include "main.h"

/**
* print_line - draws a straight line in the terminal
*
* @n: parameter to be printed
* Return: always 0
*/

void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a <= n)
		{
			_putchar('_');
			a++;
		}
	 _putchar('\n');
	}
	else
	_putchar('\n');
}
