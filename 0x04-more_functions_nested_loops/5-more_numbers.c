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
			if (j > 9)
			{
				_putchar(1 + 48);
			}
			_putschar((j % 10) + 48);
		}
		_putschar('\n');
	}
}
