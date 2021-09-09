#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	void	*res;// calloc needs to return a pointer to memory address

	res = (void *)malloc(count * size);
	if (res == 0)
		return(0;
	ft_memset(res, 0, count * size);
	return(res);
}
