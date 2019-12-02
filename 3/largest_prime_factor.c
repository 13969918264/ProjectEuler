/*
	赵子豪@20191202
	largest_prime_factor.c			-- find the largest prime factor the a number
*/
/*
	The prime factors of 13195 are 5, 7, 13 and 29.
	What is the largest prime factor of the number 600851475143 ?
*/
/*	解决思路：找因子-->找素数因子-->排序	*/
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

#define MAX 4294967296			/*	2的64次方	*/

bool isprime(unsigned long);
void factors(unsigned long, unsigned long *);
void prime(unsigned long *,unsigned long *, unsigned long);
void sort(unsigned long *,unsigned long);
void swap(unsigned long, unsigned long);
unsigned long max(unsigned long *);
void s_print(unsigned long *, unsigned long);

int main(void)
{
	unsigned long input = 0;
	unsigned long output = 0;
	unsigned long arr_1[MAX];
	unsigned long arr_2[MAX];

	if (!isprime(input))			/*	数值本身为质数	*/
	{
		factors(input, arr_1);
		s_print(arr_1, MAX);
		prime(arr_1,arr_2,MAX);
		s_print(arr_2, MAX);
		sort(arr_1, MAX);
		sort(arr_2, MAX);
		output = max(arr_2, MAX);
		printf("The largest prime factor of %ud id %ud\n", input, output);
	}
	else
	{
		printf("%d is a prime number.\n", input);
	}
		
	return 0;
}

void factors(unsigned long val, unsigned long * p)
{
	int i = 0;
	int k = 0;

	sqrt(val) == floor(val) ? (i = sqrt(val)) : (i = floor(val));
	for (k; k < i; k++)
	{
		if (k = 0)
		{
			*(p + k) = 1;
			*(P + i + k) = val;
		}
		else
		{
			
		}
		 
	}
}

void prime(unsigned long * p1, unsigned long * p2, unsigned long n)
{}

void sort(unsigned long * p, unsigned long n)
{
	swap();
}

void swap(unsigned long m, unsigned long n)
{}

void s_print(unsigned long * m, unsigned long n)
{}

unsigned long max(unsigned long * p, unsigned long n)
{}