#include<stdio.h>

void	swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(void)
{
	int a = 10;
	int b = 20;

	printf ("prima dello scambio %d %d \n", a, b);
	swap(&a,&b);
	printf ("dopo lo scambio %d %d \n", a, b);
	return(0);
}
