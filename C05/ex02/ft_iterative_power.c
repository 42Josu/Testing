int ft_iterative_power(int nb, int power)
{
	int	i;
	int	k;

	i = 1;
	k = 0;
	if (nb == 0)
		return (0);
	if (k == 0)
		k = nb;
	while (i <= power)
	{
		nb *= k;
		i++;
	}
	return (nb);
}
