#include "libft.h"

size_t	ft_strlcpy( char *dst, const char *src, size_t destsize)
{
	size_t	i;

	if (dst == NULL || !src)
		return (0);
	if (size == 0)
		return (0);
	while (src[i] && i < destsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
