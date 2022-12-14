#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - determines either its greater than 5, lass than 6 or is 0
 *
 * Return: always 0 (succes)
 */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
		if (l > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, l);
		}
		else if (l == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, l);
		}
		else
		{printf("last digit of %d is %d and is less than 6and not 0\n", n, l);
			return (0);
		}

