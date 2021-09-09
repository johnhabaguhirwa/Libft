void	(void *dest, const void src, size_t n)
{
	char *destin;
	char *source;

	destin = (char *)dest;
	source = (char *)src;
	if (!dst && !src)
		return(dest);
	while(n--)
		*destin++ = *source++;
	return(dest)
}
