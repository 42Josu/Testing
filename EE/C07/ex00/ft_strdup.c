char *ft_strdup(char *src)
{
	char *tururu;
	int		i;
	
	i = 0;
	while (src[i))
		i++;
	tururu = (char *)malloc(i);
	while (i > 0)
	{
		tururu[i] = src[i];
		i--;
	}
	return (tururu);
}