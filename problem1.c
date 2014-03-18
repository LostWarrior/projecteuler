#include <stdio.h>
// Calculate sum of number less than 1000 that are either divisible by 3 or 5
int main()
{	int i,a = 0,b = 0,c = 0,sum = 0;
	/* code */
	for (i = 0; i < 1000; i++)
	{
		/* code */
		if (i%5 == 0 && i%3 == 0)
		{
			// Sum of numbers divisible by both 3 and 5
			a = a +i;
		}
		if (i%5 == 0)
		{	
			// Sum of numbers divisible by 5
			b = b +i;
		}
		if (i%3 == 0)
		{
			// Sum of numbers divisible by 3
			c = c +i;
		}
	}
	sum = c + b - a;//Total sum = S(3) + S(5) - S( 3 and 5);
	printf("%d\n", sum);
}