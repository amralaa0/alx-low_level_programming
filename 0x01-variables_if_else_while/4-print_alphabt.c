#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: a
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar(ch);

	return (0);
}
