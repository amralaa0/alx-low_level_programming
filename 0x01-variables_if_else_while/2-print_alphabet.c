#include<stdio.h>

/**
 * main - entry point
 *
 * Description: prints the alphabet in lowercase, followed by a new line
 *
 * Return : 0 (success)
*/
int main(void)
{
	char ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
	}
	putchar('\n');
	ch++;
	return (0);
}
