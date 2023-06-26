#include "main.h"

/**
 * main - generetes random passwords for 101-crachme
 * Return: zero
*/

int main (void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 120;
		sum += c ;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
