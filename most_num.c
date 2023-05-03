#include <stdio.h>
/**
*more_numbers - prints 0-14, 10times
*
* Return: void
*/

int main(void)
{
int i = 0;
char a;
while (i < 10)
{
a= 0;
while (a <= 14)
{
putchar(a + '0');
a++;
}
putchar('\n');
i++;
}
}
