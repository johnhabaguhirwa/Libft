#include "libft.h"

void	*ft_memmove(void *dst, const void *src. size_t len)
{
	char	*source;
	char	*destin;

	source = (char *)src;
	destin = (char *)dst;
	if (source < destin)
	{
		while (len--)
			destin[n] = source[len];
	}
	else
		ft_memcpy(destin, source, len)
		return (dst);
}
