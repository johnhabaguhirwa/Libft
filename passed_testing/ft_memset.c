#include "libft.h"
#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*string;

	string = (unsigned char *)str;
	while (n-- > 0)
		*(string++) = (unsigned char)c;
	return (str);
}
