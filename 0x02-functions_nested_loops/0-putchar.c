#include "main.h"

/**
 * main - Entry point
 *
 * Desctiption:
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)

		_putchar(str[ch]);

	_putchr('\n');

	return (0);
}
