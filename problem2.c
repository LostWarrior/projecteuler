#include <stdio.h>

// Find sum of even valued fibonacci terms whose value do not exceed four million 

int main () {
	int f1 = 1, f2 = 1, sum = 0, total = 0;

	while( sum < 4000000)
	{
		if ( sum % 2 == 0)
			total = total + sum;
		sum = f1 + f2;
		f1 = f2;
		f2 = sum;
	}
	printf("%d\n", total);
}