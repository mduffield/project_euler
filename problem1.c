#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int sum;
	sum=0;
	for(i=0; i<1000; i++)
	{
		if((i%3 == 0) || (i%5 ==0))
		{
			sum+=i;
		}
	}

	printf("\n%i\n", sum);
}
