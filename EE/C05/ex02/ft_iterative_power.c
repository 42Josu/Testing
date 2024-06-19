int lerele(int nb, int power, int val)
{
	if (power == 0)
		return (1);
	else if (power == 1)
		return (val);
	else if (power >= 1)
		return lerele(nb, power - 1, (val * nb));
	return (0);
}
int ft_iterative_power(int nb, int power)
{
	return (lerele(nb, power, nb));
}
