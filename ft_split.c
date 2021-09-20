#include "libft.h"

static char	*word_after(char const *s, char c)
{
	while (*s && *s == c)
		s++;
	return ((char *)s);
}

static size_t	word_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

void	*clean_current(char **split, size_t current)
{
	size_t	i;

	i = 0;
	while (i < current)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	current;
	size_t	wordcount;

	wordcount = ft_wordsets((char *)s, c);
	split = (char **)malloc(sizeof(char *) * (wordcount + 1));
	if (split == NULL)
		return (NULL);
	current = 0;
	while (current < wordcount)
	{
		s = word_after(s, c);
		split[current] = ft_substr(s, 0, word_len(s, c));
		if (split[current] == NULL)
		{
			clean_current(split, current);
			return (NULL);
		}
		current++;
		s = s + word_len(s, c);
	}
	split[wordcount] = NULL;
	return (split);
}
