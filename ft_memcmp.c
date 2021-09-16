#include "libft.h"
#include <string.h>

void	*ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*new_s1;
	unsigned char	*new_s2;
	unsigned int	i;

	new_s1 = (unsigned char *)s1;
	new_s2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (new_s1[i] && new_s2[i] && new_s1[i] == new_s2[i] && i < n)
		i++;
	return (new_s1[i] - new_s2[i]);
}
