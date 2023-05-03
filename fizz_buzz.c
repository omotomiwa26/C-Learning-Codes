#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0)
    {
printf("Fizz");
      }
elseif (i % 5 == 0);
  {
printf("Buzz");
}
elseif (i % 3 == 0 && i % 5 == 0 );
    {
  printf("FizzBuzz");
    }
else
		{
			printf("%i", i);
		}
		//if (i != 100)
		{
			putchar(' ');
    }
printf('\n');
    return (0);
  }

