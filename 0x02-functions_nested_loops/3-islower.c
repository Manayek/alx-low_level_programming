#include "main.h"

/**
 * * _islower - check for lower case letter
 * * @c : character to check the case
 * * Return:0 or 1
 * *
 */
void test_islower(int n)
{
		int r;

			r = _islower(n);
				_putchar(r + '0');
					_putchar('\n');
}
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
