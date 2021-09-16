void	*ft_memcpy(void *dst, const void src, size_t n)
{
	char	*destin;
	char	*source;

	destin = (char *)dst;
	source = (char *)src;
	if (!dst && !src)
		return (dst);
	while (n--)
		*destin++ = *source++;
	return (dst);
}
