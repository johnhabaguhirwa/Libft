#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(s1, *(int *)set) && *s1 != '\0') //fo
		s1++;
	s1_len = ft_strlen((char *)s1);
	while (ft_strchr(&s1[s1_len], *(int *) set) && s1_len != 0) //lo
		s1_len--;
	return (ft_substr((char *)s1, 0, s1_len + 1)); // sub between fo & lo
}
