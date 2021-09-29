#include "libft.h"

static size_t	word_len(char const *s, char c)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i++] && s[i] != c)
		len++;
	return (len);
}

size_t	ft_wordsets(char *str, char sep)
{
	size_t	result;
	size_t	i;

	result = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == sep)
			i++;
		if (str[i] && str[i] != sep)
			result++;
		while (str[i] && str[i] != sep)
			i++;
	}
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	current;
	size_t	a;
	size_t	b;

	split = malloc(sizeof(char *) * (ft_wordsets((char *)s, c) + 1));
	if (!split || !s)
		return (NULL);
	current = 0;
	b = 0;
	while (current < ft_wordsets((char *)s, c))
	{
		split[current] = (char *)malloc(sizeof(char) * word_len(&s[b], c));
		if (!split)
			return (NULL);
		a = 0;
		while (s[b] == c)
			b++;
		while (s[b] && s[b] != c)
			split[current][a++] = s[b++];
		split[current][a++] = '\0';
		current++;
	}
	return (split);
}
