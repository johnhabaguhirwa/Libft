size_t ft_strlcpy( char *dest, const char *src, size_t destsize)
{
	size_t i;

	if(dest == NULL || !src)
		return(0);
	if(size == 0)
		return(0);
	while(src[i] && i < destsize - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(strlen(src));
}
