#include "main.h"
/**
 * * print_alphabet_x10 - a function that prints 10 times the alphabet
 * *
 * * Return: x10 a-z
 * *
 */
int main(void)
{
	void print_alphabet_x10(void)
	{
		int n, ma;

		ma=0;

		while(ma < 10)
		{
			for (n = 'a'; n <= 'z'; n++)
			{
				_putchar(n);
			}
			ma++;
			_putchar('\n');
		}
	}
}
