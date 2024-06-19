int ft_fibonacci(int index)
{
	int	i;
	int	k;
	int	m;

	i = 1;
	k = 0;
	m = 0;
	while (i <= index)
	{
		if((i + k) == index)
			return (i);
		m = k;
		k = i;
		i = (i + m);
	}
	return (0);
}