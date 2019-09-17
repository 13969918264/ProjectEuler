/*
	If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
	The sum of these multiples is 23.
	Find the sum of all the multiples of 3 or 5 below 1000.
*/
/*
	姓名：赵子豪
	日期：2019年9月17日
*/
/*	1_sum_of_multiples_3_or_5.c	*/
#include <stdio.h>

#define MAX_VALUE 1000
#define MAX_ARR	512

int * list(int *, int);
int sum(int *, int);

int main(void)
{
	int arr[MAX_ARR];

	list(arr, MAX_VALUE);
	printf("The sum of the natural numbers below %d that are multiples of 3 or 5 is %d \n", MAX_VALUE, sum(arr, MAX_ARR));

	return 0;
}

int * list(int * p, int n)
{
	int i = 1;

	int count = 0;

	for (i; i < n; i++)
	{
		if ((i % 3 == 0) || (i % 5) == 0)
			*(p + count++) = i;
	}
	*(p+count) = '\0';

	for (count = 0; *(p + count) != '\0'; count++)
	{
		if (count != 0 && count % 10 == 0)
			printf("\n");
		printf("%.4d \t", *(p + count));
	}
	printf("\n");

	return p;
}

int sum(int * p, int n)
{
	int sum = 0;
	int count = 0;

	while (count <= n && *p != '\0')
	{
		sum += *(p + count);
		count++;
	}

	return sum;
}
