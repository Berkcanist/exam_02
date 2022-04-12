#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
int	main()
{
	int	a;
	int b;

	a = 1;
	b = 2;
	ft_swap(&a,&b);
	printf("%d | %d", a, b);
}
