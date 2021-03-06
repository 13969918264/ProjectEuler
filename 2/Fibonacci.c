/*
	姓名：赵子豪
	日期：2019年9月19日
*/
/*
	Each new term in the Fibonacci sequence is generated by adding the previous two terms.
	By starting with 1 and 2, the first 10 terms will be:1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
	By considering the terms in the Fibonacci sequence whose values do not exceed four million,
	find the sum of the even-valued terms.
*/
/*	2_Fibonacci.c	*/
#include <stdio.h>
//	#include <stdlib.h>			//	malloc() 和 free()

#define MAX 4000000
#define FOUR 4
#define ONE 1
#define TWO 2
#define CYCLE 10

int main(void)
{
	int fiboncacci[MAX / (FOUR * CYCLE * CYCLE)];
	int * p;
	int count = 0;
	int sum = 0;

	p  = fiboncacci;

/*	int amount = 0;
	int * ptd;

	ptd = (int *)malloc(MAX * sizeof(int));
	if (ptd == NULL)
	{
		puts("Memory allocation failed. goodbye.");
		exit(EXIT_FAILURE);
	}
*/
	for (*(p + count++) = 1, *(p + count++) = 2; *(p + count) < MAX; count++)
	{
		*(p + count) = *(p + count - ONE) + *(p + count - TWO);
	}

	for (count = 0; *(p + count) < MAX; count++)
	{
		if ((count != 0) && (count % CYCLE ==  0))
			putchar('\n');
		printf("%d\t", *(p + count));
		if (*(p + count) % TWO == 0)
			sum += *(p + count);
	}
	printf("\nsum of even of Fibonacci number is %d.\n", sum);
//	free(ptd);

	return 0;
}
