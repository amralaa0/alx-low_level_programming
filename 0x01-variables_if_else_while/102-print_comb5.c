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
        int firstDigit = 0, secondDigit;

while (firstDigit <= 99)
{
       secondDigit = firstDigit;
if (secondDigit != firstDigit)
{
putchar((firstDigit / 10) + 48);
putchar((firstDigit % 10) + 48);
putchar(' ');
putchar((secondDigit / 10) + 48);
putchar((secondDigit % 10) + 48);

if (firstDigit != 98 || secondDigit != 99)
{
putchar(',');
putchar('');
}
}
secondDigit++;
}
firstdigit++;
}
putchar('\n');

return (0);
}
