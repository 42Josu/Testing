char *ft_strjoin(int size, char **strs, char *sep)
{
	char tmp[9999];
	int	i;
	int	n;
	int	k;
	
	i = 0;
	n = 0;
	k = 0;
	while(strs[i])
	{
		while(strs[i][n])
		{
			tmp[k] = strs[i][n];
			n++;
			k++;
		}
		n = 0;
		k++;
		while(sep[n])
		{
			tmp[k] = sep[n];
			n++;
			k++;
		}
		n = 0;
		i++;
	}
	return (tmp);
}