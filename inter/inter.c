#include <unistd.h>
int	check(char *str, char a, int b)
{
	int	c;

	c = 0;
	while(c < b)
	{
		if(str[c] == a)
			return 0;
		c++;
	}
	return 1;
}
void	inter(char *str, char *str1)
{
	int	i;
	int	j;

	i = 0;
	while(str[i])
	{
		j = 0;
		while(str1[j])
		{
			if(str[i] == str1[j])
			{
				if(check(str, str[i], i) == 1)
				{
					write(1,&str[i], 1);
					break ;
				}
			}
			j++;
		}
		i++;
	}
}
int	main(int ac, char **av)
{
	if(ac == 3)
	{
		inter(av[1], av[2]);
	}
	write(1, "\n", 1);
}
