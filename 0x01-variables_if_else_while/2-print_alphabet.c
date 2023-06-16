#include<stdio.h>

/**
 * main - entry point
 *
 * Description: print all alphabets letters
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

	return (0);
}
