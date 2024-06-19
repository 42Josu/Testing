int ft_recursive_factorial(int nb)
{
	int	i;
	int	f;

	i = 1;
	f = 1;
	if(nb < 0)
		return (0);
	while (i <= nb)
	{
		f *= i;
		i++;
	}
	return (f);
}
