#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main functin to generate a random number
 *
 * Return: Always # (success)
 *
 */

int main(void)
{
        int n;
	int num;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
	printf("last digit of %d is ", n);
	num = n % 10;
	if (num > 5)
        {
                printf("%d and is greater than 5\n", num);
        }
        else if ((num < 6) && (num < 6))
        {
                printf("%d and is less than & and 0\n", num);
        }
        else
        {
                printf("%d and is 0\n", num);
        }
        return (0);
}
