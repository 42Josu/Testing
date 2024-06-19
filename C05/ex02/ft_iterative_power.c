int ft_iterative_power(int nb, int power)
{
	int	i;
	int	k;

	i = 1;
	k = 0;
	if (power == 0 && nb == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else if (power < 0)
		return (0);
	else if (power >= 1)
		while (i <= power)
		{
			nb *= k;
			i++;
		}
	return (nb);
}
