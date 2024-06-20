int *ft_range(int min, int max)
{
	int	*a;
	int	i;
	
	i = 0;
	while ((min + i) < max)
	{
		a = (char *)malloc(i + 1);
		a[i] = (min + i);
		i++;
	}
	return (a);
}