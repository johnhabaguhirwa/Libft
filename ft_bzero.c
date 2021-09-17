#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*new_s;

	new_s = (unsigned char *)s;
	while (n-- > 0)
		*(new_s++) = 0;
}
