/*
	The prime factors of 13195 are 5, 7, 13 and 29.
	What is the largest prime factor of the number 600851475143 ?
*/
/*	赵子豪@2019年9月22日23日	*/
/*	largest_prime_factor.c	*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define TARGET 600851475143
#define MAX 10000

void max_prime_factor(int *);
int * factors(int);

int main(void)
{
	printf("The largest prime factor of %d is %d.\n", TARGET, max_prime_factor(factors(TARGET)));

	return 0;
}

int max_prime_factor(int target)
{
	int n = 1;
	int count = 0;
	int factors[MAX];

	while( n <= sqrt(target))
	{
		if ((target % n) == 0)
		{
			factors[count++] = target / n;
			n++;
			continue;
		}

		if (floor(sqrt(target)) == ceil(sqrt(target)))
			factors[MAX] = sqrt(target);
	}
}
