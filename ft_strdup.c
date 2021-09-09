#include "libft.h"
char	*strdup(const char *s1)
{
	char	*str;
	int		str_len;

	str_len = ft_strlen(s) + 1;
	if ((str = malloc(str_len)))
	{
		ft_strlcpy(str, s, str_len);
		return (str);
	}
	return (NULL);
}
