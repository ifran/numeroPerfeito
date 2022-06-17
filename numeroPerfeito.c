#include <stdio.h>

int main() 
{
	int A, i, j, l, n;
	for (l = 1; l <= 100000; l++)
	{
		A = l;
		j = 0;
		n = 1;
		for (i = A; i > 1; i--)
		{
			if ((A % n) == 0)
			{
				j += n;
			}
			n++;
		}
		
		if (j == A)
		{
			printf("Perfeito ");
			printf("A %i\n", A);
		}
	}
}
