#include <stdio.h>
/**
* print_alphabet - Entry point
*
* Return: void
*/

int main(void)
{
int i=1;
char alphabet;
while(i <=10)
{
alphabet = 'a';
while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
i++;
}
}
