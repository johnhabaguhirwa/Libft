size_t ft_strlen(const char *c)
{
	size_t length;

	length = 0;
	while(*c++)
		length++;
	return(length);
}
