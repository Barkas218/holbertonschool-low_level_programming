#include <stdio.h>
/*
 * main - 
 *
 */
int main(void)
{
int num;
	for (num = 1; num <= 100; num++)
	{
		if (num == 100)
		{
		printf ("Buzz\n");
		break;
		}
		if (num % 3 == 0 && num % 5 == 0)
		{
		printf("FizzBuzz ");
		}
		if (num % 3 == 0)
		{
		printf("Fizz ");
		}
		else if (num % 5 == 0)
		{
		printf("Buzz ");
		}
		else 
		{
		printf("%d  ", num);
		}
	}
return(0);
}
