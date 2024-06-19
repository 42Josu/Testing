int ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	while (i <= power)
	{
		nb *= nb;
	}
	return (nb);
}
