/*
	赵子豪@20191202-20191204
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

int isprime( (unsigned long) );			//	判断是否为质数
void factors( (unsigned long) , (unsigned long) *, (unsigned long) );			//	找因子
void prime( (unsigned long) *, (unsigned long) *, (unsigned long) );			//	找质数
void sort( (unsigned long) *, (unsigned long) );			//	排序
void swap( (unsigned long) , (unsigned long) );			//	交换
unsigned long largest( (unsigned long) * , (unsigned long) );			//	最大值
void s_print(unsigned long *, unsigned long);			//	打印数组

int main(void)
{
	unsigned long input = 0;
	unsigned long output = 0;
	unsigned long arr_1[MAX];			//	所有因子
	unsigned long arr_2[MAX];			//	所有质因子

	if ( !isprime(input) )			/*	数值本身为质数	*/
	{
		factors(input, arr_1, MAX);
		s_print(arr_1, MAX);
		prime(arr_2,arr_1,MAX);
		s_print(arr_2, MAX);
		sort(arr_1, MAX);
		sort(arr_2, MAX);
		output = largest(arr_2, MAX);
		printf("The largest prime factor of %ud id %ud\n", input, output);
	}
	else
	{
		printf("%d is a prime number.\n", input);
	}
		
	return 0;
}

void factors(unsigned long val, unsigned long * p, unsigned long n)
{
	int i = 0;			//	控制循环次数
	int k = 1;			//	遍历自然数
	int m = 0;			//	控制目标数组位置

	for (i; i < n; i++)
		*(p + i) = 0;

	sqrt(val) == floor(val) ? ( i = sqrt(val) ) : (i = floor(val) );
	
	for (k, m; k < i; k++)
	{
		if (k == 1)
		{
			*(p + m) = 1;
			*(p + i + m) = val;
		}
		else
			if (val % k == 0)
			{	
				*(p + m) = k;
				*(p + m + i) = val / k;
				m++;
			}
		 
	}
}

void prime(unsigned long * dest, unsigned long * source, unsigned long n)
{
	int i = 0;
	unsigned long m;

	for (i; i < n; i++)
		*(dest + i) = 0;
	
	for (i = 0, m = 0; i < n; i++)
	{
		if ( (*(source + i) != 0) && (isprime( *(source + i) ) ) )
		{
			*(dest + m) = *(source + i);
			m++;
		}
		else
			continue;
		
	}
}

void sort(unsigned long * p, unsigned long n)
{
	//从大到小
	unsigned long i = 0;
	unsigned long j = 0;

	for (i; i< n; i++)
		for (j = i+1; j < n; j++)
			if (*(p + i) < *(p + j) )
				swap(*(p+i), *(p+j) );
}

void swap(unsigned long m, unsigned long n)
{
	unsigned long i;

	i = m;
	m = n;
	n = i;
}

void s_print(unsigned long * p, unsigned long n)
{
	unsigned long i;

	for (i; i < n; i++)
	{
		printf("%ud", *(p+i));
		if ( (i != 0) && (i % 10 == 0) )
			printf("\n");
		else if (i != 0)
			printf("\t");
	}		
}

unsigned long largest(unsigned long * p, unsigned long n)
{
	if ( (*p) > *(p + 1))
		return *p;
}

int isprime(unsigned long n)
{
	unsigned long i = 2;
	int flag = 0;

	for (i; ((unsigned long)sqrt(n) == (unsigned long)floor(sqrt(n) ) ) && i <sqrt(n); i++ )
		if ( (n % i) == 0)
			break;
		else
			flag = 1;
		
	return flag;
}