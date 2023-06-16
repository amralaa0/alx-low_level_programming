#include<stdio.h>

/**
 * main - Entry point
 *
 * Description:
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char ch = 'a';
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
