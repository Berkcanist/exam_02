#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}
int	main()
{
	char a[] = "abcdefghjkli";
	printf("%d",ft_strlen(a));
}
