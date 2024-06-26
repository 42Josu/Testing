unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;
	
	n = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (n < (size - 1) && src[n])
	{
		dest[i + n] = src[n];
		n++;
	}
	return (unsigned int) i + n;
}