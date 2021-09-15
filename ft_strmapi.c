//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if(!s)
		return(NULL);
	str = (char *)malloc(sizeof(char) * (strlen(s)) +1);
	if(str == NULL)
		return(NULL);
	i = 0;
	while(s[i++])
		str[i] = f(i, s[i]);
	str[i] = '\0';
	return(str);
}
