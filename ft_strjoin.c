char	*ft_strjoin(char const *s1, char const *s2);
{
	char	*s3;
	int		i;
	int		j;

	s3 = (char*)malloc(sizeof(char) * (ft_strlen((char *)s1) + ft_strlen((char *)s2)  + 1));
	if(!s1 || !s2 || !s3)
		return(NULL);
	while(s1[j])
		s3[i++] = s1[j++];
	j = 0;
	while(s2[j])
		s3[i++] = s2[j++];
	s3[i] = '\0';
	return(s3);
}
