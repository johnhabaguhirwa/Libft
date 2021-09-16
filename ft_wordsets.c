#include <string.h>

size_t	ft_wordsets(char *str, char sep)
{
	size_t	result;
	size_t	i;

	i = 0;
	result = 0;
	while (str[i])
	{
		while (str[i] && str[i] == sep)
			i++;
		while (str[i] && str[i] != sep)
			i++;
		result++;
	}
	return (result);
}
