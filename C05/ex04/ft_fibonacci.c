int ft_fibonacci(int index)
{
	int	i;
	int	k;
	int	m;

	i = 1;
	k = 0;
	m = 0;
	if (index < 0)
		return (-1);
	while (i <= index)
	{
		if((i + k) == index)
			return (i + k);
		m = k;
		k = i;
		i = (i + m);
	}
	return (0);
}
