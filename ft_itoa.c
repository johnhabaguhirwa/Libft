#include "libft.h"

int		absolute(int nbr)
{
	if (nbr < 0)
	{
		return (-nbr);
	}
	return (nbr);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;

	len = ft_nbrlen(n);
	result = malloc(sizeof(char) * (len + 1));
	result[len] = '\0';
	if(n < 0)
		results[0] = '-';
	else if(n == 0)
		result[0] = '0';
	while()
	{
		len--;
		result[len] = absolute(n % 10) + '0';
		n = n / 10;
	}
	return(result);
}
