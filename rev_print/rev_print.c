#include <unistd.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

char *ft_rev_print(char *str)
{
	int	size;

	size = ft_strlen(str) - 1;
	while(size >= 0)
	{
		write(1, &str[size], 1);
		size--;
	}
	return (str);
}
int	main(int ac, char **av)
{
	if(ac == 2)
		ft_rev_print(av[1]);
	return 0;
}
