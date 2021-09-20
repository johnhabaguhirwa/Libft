#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	while (src[i] && i < (dstsize - dst_len - 1))
	{
		dst[dst_len + 1] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (src_len + dst_len);
}
