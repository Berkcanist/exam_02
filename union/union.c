#include <unistd.h>
int	check2(char *str, char c)
{
	int	m;

	m = 0;
	while(str[m])
	{
		if(str[m] == c)
			return 0;
		m++;
	}
	return 1;
}
int	check1(char *str, char a, int b)
{
	int	x;

	x = 0;
	while(x < b)
	{
		if(str[x] == a)
			return 0;
		x++;
	}
	return 1;
}
void	ft_union(char *str, char *str1)
{
	int	i;
	int	j;

	i = 0;
	while(str[i])
	{
		if(check1(str, str[i], i) == 1)
		{
			write(1, &str[i], 1);
		}
		i++;
	}
	j = 0;
	while(str1[j])
	{
		if(check2(str, str1[j]) == 1)
		{
			if(check1(str1, str1[j], j) == 1)
			{
				write(1, &str1[j], 1);
			}
		}
		j++;
	}
}
int	main(int ac, char **av)
{
	if(ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return 0;
}
