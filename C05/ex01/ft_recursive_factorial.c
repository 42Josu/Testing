int ft_recursive_factorial(int nb)
{
	int	i;
	int	f;

	i = 1;
	f = 1;
	while (f <= nb)
	{
		f *= i;
		i++;
	}
	if (f == nb)
		return (f);
	else
		return (0);
}
