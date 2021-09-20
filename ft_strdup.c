#include "libft.h"

char	*strdup(const char *s1)
{
	char		*s2;
	size_t		len;

	len = ft_strlen(s1) + 1;
	s2 = (char *)malloc(sizeof(char) * len);
	if (s2 == NULL)
		return (NULL);
	ft_strlcpy(s2, s1, len);
	return (s2);
}
