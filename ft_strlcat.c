#include "libft.h"

size_t	strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	if (size <= dst_len)
		return (src_len + dst_size);
	while (src[i] && i < (dstsize - dst_len - 1))
	{
		dest[dst_len + 1] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (src_len + dstlen);
}
