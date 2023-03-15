#include <stdio.h>
#include <stdlib.h>

/**
  *main - prints a number 1 - 100,checks if anumber is amultiple of 3,5 or both
  *Return:  always success
  */
int main(void)
{
	int y = 100;

	for (y = 1; y <= 100; y++)
		if (y % 3 == 0 && y % 5 == 0)
		{
			printf("FizzBuzz\n");
		}
		else if (y % 3 == 0)
		{
			printf("Fizz\n");
		}
		else if (y % 5 == 0)
		{
			printf("Buzz\n");
		}

		else
			printf("%d\n", y);
	return (0);
}
