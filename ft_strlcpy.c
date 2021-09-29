#include "libft.h"

size_t	ft_strlcpy( char *dst, const char *src, size_t destsize)
{
	size_t	i;

	if (destsize == 0)
		return (ft_strlen((char *)src));
	i = 0;
	while (src[i] && destsize-- > 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (dst[i] || src[i])
	{
		if (src[i])
			i++;
	}
	return (i);
}
