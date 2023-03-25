#include "main.h"

/**
 * more_numbers - print more numbers
 *
 *
 * Return: On success 1, if not 0
*/

void more_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <= 14; j++)
		{
			int k = j;

			if (j > 9)
			{
				_putchar(1 + 48);
				k = j % 10;
			}
			_putchar(k + 48);
		}
		_putchar('\n');
	}
}
