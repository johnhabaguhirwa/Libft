char	*ft_strrchr(const char *s, int c)
{
	const char	*s_hold;

	s_hold = s;
	while (*s)
		s++;
	while (s >= s_hold)
	{
		if (*s == c)
			return ((char *)s);
		s--;
	}
	return (0);
}
