char	*ft_strcat(char *dest, char *src)
{
	int	d;
	int	s;

	s = 0;
	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[s] != '\0')
	{
		dest[d] = src[s];
		s++;
		d++;
	}
	dest[d] = '\0';
	return (dest);
}
