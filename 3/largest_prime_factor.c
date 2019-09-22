/*
	The prime factors of 13195 are 5, 7, 13 and 29.
	What is the largest prime factor of the number 600851475143 ?
*/
/*	赵子豪@2019年9月22日	*/
/*	largest_prime_factor.c	*/
#include <stdio.h>

#define TARGET 600851475143

int max_prime_factors(int);

int main(void)
{
	printf("The largest prime factor of %d is %d.\n", TARGET, max_prime_factors(TARGET));

	return 0;
}

int max_prime_factors(int target)
{
	int n = 1;

}
