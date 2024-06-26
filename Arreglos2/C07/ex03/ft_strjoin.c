char *ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		n;
	int		m;
	char	*k;
	
	i = 0;
	n = 0;
	while (sep[n])
		n++;
	while (strs[i])
		i++;
	if(!(k = (char *)malloc(sizeof(strs) + (n * i * sizeof(char)))))
		return NULL;
	if(size == 0)
		return (k);
	i = 0;
	n = 0;
	m = 0;
	while (strs[i])
	{
		while (strs[i][n])
		{
			k[m] = strs[i][n];
			m++;
			n++;
		}
		n = 0;
		while (sep[n])
		{
			k[m] = sep[n];
			m++;
			n++;
		}
		n = 0;
		i++;
	}
	return (k);
}