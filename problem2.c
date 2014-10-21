#include <stdio.h>
#include <stdlib.h>

int main()
{
	int next;
	int prev;
	int fib;
	int sum;

	fib = 0;
	prev = 0;
	next = 1;
	sum = 0;

	while(fib<4000000)
	{
		fib=prev+next;
		prev=next;
		next=fib;
		printf("fib: %i, next: %i, prev: %i\n", fib, next, prev);
		if(fib%2==0)
		{
			sum+=fib;
		}
	}
	printf("SUM: %i\n", sum);
}
