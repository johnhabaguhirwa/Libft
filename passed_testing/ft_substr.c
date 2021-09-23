#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	sub_len;
	size_t	i;

	i = 0;
	sub_len = ft_strlen(s);
	sub = (char *)malloc((sub_len - len) + 1);
	if (!sub)
		return (NULL);
	ft_strncpy(sub, s + start, len);
	return (sub);
}
