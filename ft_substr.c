#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	sub_len;

	sub_len = len - start;
	sub = (char *)malloc(sizeof(char) * (sub_len + 1));
	if (res == 0)
		return (NULL);
	ft_strncpy(sub, s + start, len);
	return (sub);
}
