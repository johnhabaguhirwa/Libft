#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*source;
	char	*destin;
	size_t	n;

	source = (char *)src;
	destin = (char *)dst;
	n = 0;
	if (source < destin)
	{
		while (n++ <= len)
			destin[len - n] = source[len - n];
	}
	else
		while (len--)
			*(destin++) = *(source++);
	return (dst);
}
