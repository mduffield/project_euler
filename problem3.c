#include <stdio.h>
#include <stdlib.h>

int is_prime(int num)
{
        int i;
        int prime=1;
        for(i=2;i<num;i++)
        {
                if(num%i==0)
                {
                        prime = 0;
                        break;
                }
        }
        return prime;
}


int main()
{
	unsigned long long the_num;
	unsigned long long counter;

	the_num = 600851475143;

	for(counter=1;counter<the_num; counter++)
	{
		if(is_prime(counter)) 
			if ((the_num%counter)==0)
				printf("%llu\n", counter);
		
	}
}
