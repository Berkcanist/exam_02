#include <unistd.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);	
}
char	*ft_strrev(char *str)
{
	int	size;
	int	i;
	int	temp;

	size = ft_strlen(str) - 1;
	i = 0;
	while(i < size)
	{
		temp = str[i];
		str[i] = str[size];
		str[size] = temp;
		i++;
		size--;
	}
	return (str);
}
int	main()
{
	int	i = 0;
	char a[] = "berkcan";
	ft_strrev(a);
	while(a[i])
	{
		write(1, &a[i], 1);
		i++;
	}
}
