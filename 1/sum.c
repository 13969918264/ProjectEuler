/*
	If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
	The sum of these multiples is 23.
	Find the sum of all the multiples of 3 or 5 below 1000.
*/
/*	sum.c	*/
#include <stdio.h>

#define MAX_VALUE 1000
#define MAX_ARR	512

int * list(int *, int);
int sum(int *, int);

int main(void)
{
	int arr[MAX_ARR];
	int sum = 0;
	list(arr, MAX_VALUE);
	printf("The sum of the natural numbers below %d that are multiples of 3 or 5 is %d \n",
			MAX_VALUE, sum(arr, MAX_ARR));

	return 0;
}

int * list(int * p, int n)
{

}

int sum(int * p, int n)
{

}
