char	*ft_strrchar(const cchar *s, int c)
{
	const char	*s_hold;

	s_hold = s;
	while (*s)
	{
		*s++;
	}
	if (c == '\0')
		return ((char *)s);
	while (s >= s_hold)
	{
		if (*s == c)
			return ((char *)s);
		s--;
	}
	return (0);
}
